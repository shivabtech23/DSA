class Solution {
public:
    int maxArea(vector<int>& height) {
      
    int n = height.size();
    int L = 0;
    int R = n - 1;
    int maxarea = 0;

    while (L < R) {
        int width = R - L;
        int level = min(height[L], height[R]);
        int area  = width * level;
        maxarea = max(maxarea, area);

        if (height[L] < height[R])
            L++;
        else
            R--;
    }

    return maxarea;
   
    }
};