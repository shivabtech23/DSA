class Solution {
public:
    bool isPalindrome(int x) {
        // negatives and numbers ending with 0 (except 0 itself) are not palindrome
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int rev = 0;

        while (x > rev) {
            rev = rev * 10 + x % 10;
            x = x / 10;
        }

        // for even digits: x == rev
        // for odd digits:  x == rev / 10
        return (x == rev || x == rev / 10);
    }
};
