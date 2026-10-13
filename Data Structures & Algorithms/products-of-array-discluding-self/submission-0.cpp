class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        bool swtc = false;
        int zeroidx; 
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i] == 0){
                swtc = true;
                zeroidx = i;
                break;
            }
        }

        if(swtc){
            vector<int>ans(nums.size() , 0);
            for(int i = 0 ; i<nums.size() ; i++){
                if(i == zeroidx) continue;
                product *= nums[i];
            }
            ans[zeroidx] = product;
            return ans;
        }

        else{
            vector<int>ans;
            for(int i = 0 ; i<nums.size() ; i++){
                product *= nums[i];
            }

            for(int i = 0 ; i<nums.size() ; i++){
                ans.push_back(product / nums[i]);
            }
            return ans;
        }
    }
};
