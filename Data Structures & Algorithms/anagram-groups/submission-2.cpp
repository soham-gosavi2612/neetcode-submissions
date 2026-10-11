class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int> , vector<string>>mpp;
        for(string s : strs){
            vector<int>count(26 , 0);
            for(char c : s){
                count[int(c) - int('a')]++;
            }
            mpp[count].push_back(s);
        }

        vector<vector<string>>ans;
        for(auto x : mpp){
            ans.push_back(x.second);
        }

        return ans;
    }
};
