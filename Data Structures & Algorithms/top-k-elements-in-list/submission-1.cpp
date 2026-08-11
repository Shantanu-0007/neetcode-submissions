class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        // Step 1: Count frequency
        unordered_map<int, int> freq;
        for(int x : nums) {
            freq[x]++;
        }
        // Step 2: Create n+1 buckets
        vector<vector<int>> bucket(n + 1);
        // Step 3: Put numbers into buckets according to frequency
        for(auto p : freq) {
            int number = p.first;
            int frequency = p.second;

            bucket[frequency].push_back(number);
        }
        // Step 4: Pick top k elements
        vector<int> result;
        for(int frequency = n; frequency >= 1; frequency--) {
            for(int number : bucket[frequency]) {
                result.push_back(number);
                if(result.size() == k) {
                    return result;
                }
            }
        }
        return result;
    }
};