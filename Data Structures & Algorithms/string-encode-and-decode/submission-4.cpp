class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        for(auto word : strs){
            for(int i = 0 ; i<word.size() ; i++){
                encoded_string += char(word[i]++);
            }
            encoded_string += '~';
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string>decoded_strs;
        string word;
        for(int i = 0 ; i<s.size() ; i++){
            if(s[i] != '~') word += char(s[i]--);
            if(s[i] == '~') {
                decoded_strs.push_back(word);
                word = "";
            }
        }
        return decoded_strs;
    }
};
