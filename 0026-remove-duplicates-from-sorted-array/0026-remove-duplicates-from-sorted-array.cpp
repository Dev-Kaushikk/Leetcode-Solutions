class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k=n;
        int left=0;
        for(int i=1;i<n;i++)
        {
            if(nums[left] == nums[i])
            {
                k-=1;
            }
            else
            {
                left+=1;
                swap(nums[left],nums[i]);
            }
        }
        return k;
    }
};