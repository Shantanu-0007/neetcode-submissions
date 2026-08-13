class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        sort(numbers.begin(),numbers.end());
        int n=numbers.size()-1;
        int m=0;
            while(m<n){
                if(numbers[m]+numbers[n]==target){
                    return{m+1,n+1};
                }
                else if(numbers[m]+numbers[n]>target){
                    n--;
                }
                else{
                    m++;
                }
            }
        return{-1,-1};
    }
};