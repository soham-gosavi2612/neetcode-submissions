class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        for(int i = 0 ; i<nums.size() ; i++) s.insert(nums[i]);
        
        int ans = 0;

        for(auto it : s){
            int count = 1;
            if(s.contains(it-1)) continue;
            else{
                int j = 1;
                while(s.contains(it + j)){
                    count++;
                    j++;
                }
            }
            ans = max(ans , count);
        }
        return ans;
    }
};
