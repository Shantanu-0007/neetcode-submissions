class Solution {
public:
    int lengthOfLongestSubstring(string s) { //abcabcbb
        unordered_set<char> hs;
        int left = 0;
        int maxLength = 0;

        for (int right = 0; right < s.length(); right++) {
            while (hs.count(s[right])) { //a,b,c,b
                hs.erase(s[left]);//bc,ca, ab, 
                left++;//b,c,a
            }

            hs.insert(s[right]);//abc, bca, cab, abc
            maxLength = max(maxLength, right - left + 1);//1, 2, 3
        }

        return maxLength;//
    }
};