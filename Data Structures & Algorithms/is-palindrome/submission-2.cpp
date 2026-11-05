class Solution {
public:
    bool isAlpNum(char c) {
    return (c >= 'A' && c <= 'Z') ||
           (c >= 'a' && c <= 'z') ||
           (c >= '0' && c <= '9');
    }
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;

        while(l < r){
            while(!isAlpNum(s[l]) && l<r) l++;
            while(!isAlpNum(s[r]) && r>l) r--;
            if(tolower(s[l]) != tolower(s[r])) return false;
            l++;
            r--;
        }
        return true;
    }
};
