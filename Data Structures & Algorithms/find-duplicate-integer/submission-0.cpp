class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> freq;
        for(int num: nums){
            freq[num]++;
        }
        for(auto i:freq){
            if(i.second > 1) return i.first;
        }
        return -1;
    }
};