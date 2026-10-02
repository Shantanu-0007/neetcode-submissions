class Solution {
public:
    bool canJump(vector<int>& nums) { //1,2,1,0,1
        int maxjump = 0; //
        for(int i = 0; i < nums.size(); i++) { //0,1
            if(i > maxjump) return false; //
            maxjump = max(maxjump, i + nums[i]); //1,3
        }
        return true;
    }
};