class Solution {
public:
    int reverse(int x) {
        int rd = 0;

        while (x != 0) {
            int ed = x % 10;

            // overflow check
            if (rd > INT_MAX / 10 || rd < INT_MIN / 10)
                return 0;

            rd = rd * 10 + ed;
            x = x / 10;
        }

        return rd;
    }
};
