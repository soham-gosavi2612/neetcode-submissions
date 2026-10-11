class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int>mpp1;
        unordered_map<char , int>mpp2;

        for(int i = 0 ; i<s.size() ; i++) mpp1[s[i]]++;
        for(int i = 0 ; i<t.size() ; i++) mpp2[t[i]]++;

        if(mpp1.size() != mpp2.size()) return false;
        else{
            for(char x : s){
                if(mpp1[x] != mpp2[x]){
                    return false;
                    break;
                }
            }
            return true;
        }
    }
};
