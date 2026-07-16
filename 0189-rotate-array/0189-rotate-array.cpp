class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> arr;
        k=k%n;
        int idx=n-k;
        for (int i=idx;i<n;i++)
        {
            arr.push_back(nums[i]);
        }
        for(int i=0;i<idx;i++)
        {
            arr.push_back(nums[i]);
        }
        nums=arr;
    }
};