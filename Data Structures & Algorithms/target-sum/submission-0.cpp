class Solution {
public:

    int countSubset(vector<int>& nums, int sum) {
        int n = nums.size();
        vector<vector<int>> t(n + 1, vector<int>(sum + 1, 0));
        t[0][0] = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= sum; j++) {
                if (nums[i - 1] <= j) {
                    t[i][j] = t[i - 1][j - nums[i - 1]] + t[i - 1][j];
                }
                else {
                    t[i][j] = t[i - 1][j];
                }
            }
        }
        return t[n][sum];
    }


    int findTargetSumWays(vector<int>& nums, int target) {
        int totalSum = 0;
        for (int x : nums) {
            totalSum += x;
        }
        // No solution possible
        if (abs(target) > totalSum)
            return 0;
        if ((totalSum + target) % 2 != 0)
            return 0;
        int subsetSum = (totalSum + target) / 2;
        return countSubset(nums, subsetSum);
    }
};