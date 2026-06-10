class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int>freqs,freqt;
        for(char c:s) freqs[c]++;
        for(char c:t) freqt[c]++;
        if(freqs==freqt) return true;
        return false;
    }
};
