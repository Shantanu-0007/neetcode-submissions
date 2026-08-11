class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        // Count frequencies
        for(int x : nums) {
            freq[x]++;
        }
        // Store {number, frequency}
        vector<pair<int, int>> arr;
        for(auto p : freq) {
            arr.push_back({p.first, p.second});
        }
        // Sort by frequency
        sort(arr.begin(), arr.end(),
             [](pair<int,int>& a, pair<int,int>& b) {
                 return a.second > b.second;
             });
        // Get top k elements
        vector<int> result;
        for(int i = 0; i < k; i++) {
            result.push_back(arr[i].first);
        }
        return result;
    }
};