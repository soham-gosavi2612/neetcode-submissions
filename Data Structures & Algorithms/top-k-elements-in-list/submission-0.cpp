class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> buckets(nums.size() + 1);
        unordered_map<int, int> count;

        for (int x : nums) {
            count[x]++;
        }

        for (auto x : count) {
            int n = x.first;
            int c = x.second;
            buckets[c].push_back(n);
        }

        vector<int> ans;

        for (int i = nums.size(); i >= 1; i--) {
            for (auto n : buckets[i]) {
                ans.push_back(n);

                if (ans.size() == k)
                    return ans;
            }
        }

        return ans;
    }
};
