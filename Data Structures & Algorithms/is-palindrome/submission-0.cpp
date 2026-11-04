class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin() , s.end() , s.begin() , [](unsigned char c) {
            return tolower(c);
        });

        for(int i = 0; i < s.size(); i++){
            if(!isalnum((unsigned char)s[i])){
                s.erase(i, 1);
                i--;
            }
        }
        int i = 0;
        int j = s.size()-1;
        while(i<=j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
