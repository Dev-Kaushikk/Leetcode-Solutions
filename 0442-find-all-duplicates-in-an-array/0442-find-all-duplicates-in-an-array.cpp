class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>mp;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(mp.find(nums[i]) != mp.end())
            {
                ans.push_back(nums[i]);
            }
            else
            {
                mp.insert(nums[i]);
            }

        }
        return ans;
    }
};