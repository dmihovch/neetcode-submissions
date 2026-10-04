class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char,int> cms;
       unordered_map<char,int> cmt;
        for(const char& ch: s) {
            cms[ch]++;
        }

        for(const char& ch: t) {
            cmt[ch]++;
        }
        
        return cms == cmt;

    }
};
