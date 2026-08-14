class Solution {
public:
    int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int maxArea = 0;
    while (left < right) {
        // int currentArea = min(height[left], height[right]) * (right - left);
        // maxArea = max(maxArea, currentArea);

        int widht = right - left;
        int heightOfWater = min(height[left], height[right]);
        int currentArea = widht * heightOfWater;
        maxArea = max(maxArea, currentArea);

        height[left] < height[right] ? left++ : right--;
    }

    return maxArea;
}
};