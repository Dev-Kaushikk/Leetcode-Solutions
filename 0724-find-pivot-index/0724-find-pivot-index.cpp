class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> leftSum(n);
        vector <int> rightSum(n);
        int idx;
        leftSum[0]=0;
        rightSum[n-1]=0;
        for(int i=1;i<n;i++)
        {
            leftSum[i]= leftSum[i-1]+nums[i-1];
        }
        for(int i=n-2;0<=i;i--)
        {
            rightSum[i]= rightSum[i+1]+nums[i+1];
        }
        for(idx=0;idx<n;idx++)
        {
            if(leftSum[idx]==rightSum[idx])
            {
                return idx;
            }
        }
        return -1;
    }
};