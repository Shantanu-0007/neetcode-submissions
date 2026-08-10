class Solution {
public:
    bool isAnagram(string s, string t) {
        int s1 = s.size();
        int s2 = t.size();
        if(s1!=s2) return false;
        unordered_map<char,int> freq;
        unordered_map<char,int> freq2;
        for(int i=0; i<s1; i++){
            freq[s[i]]++;
            freq2[t[i]]++;
        }
        return freq == freq2; 
    }
};
