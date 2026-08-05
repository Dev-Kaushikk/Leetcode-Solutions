class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> mp;
        for(int i=0;i<n;i++)
        {
            
            if(mp.find(nums[i]) != mp.end())
            {
                return true;
            }
            mp.insert(nums[i]);
        }
        return false;
    }
};