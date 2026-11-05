class Solution {
public:
    vector<vector<int>> twoSum(vector<int>& numbers, int target) {
        vector<vector<int>> pairs;

        int i = 0;
        int j = numbers.size() - 1;

        while(i < j) {
            int sum = numbers[i] + numbers[j];

            if(sum == target) {
                pairs.push_back({numbers[i], numbers[j]});

                int leftVal = numbers[i];
                int rightVal = numbers[j];

                while(i < j && numbers[i] == leftVal) i++;
                while(i < j && numbers[j] == rightVal) j--;
            }
            else if(sum < target) {
                i++;
            }
            else {
                j--;
            }
        }

        return pairs;
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> alltriplets;

        for(int i = 0; i < nums.size(); i++) {
            vector<int> temp = nums;

            int complement = -nums[i];

            temp.erase(temp.begin() + i);
            sort(temp.begin(), temp.end());

            vector<vector<int>> ans = twoSum(temp, complement);

            for(auto it : ans) {
                it.push_back(nums[i]);
                sort(it.begin(), it.end());

                if(find(alltriplets.begin(), alltriplets.end(), it) == alltriplets.end()) {
                    alltriplets.push_back(it);
                }
            }
        }

        return alltriplets;
    }
};
