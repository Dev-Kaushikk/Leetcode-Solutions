class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int j=0;
        int sum=0;
        int minimalSubarray = n+1;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            while(sum>=target)
            {
                int length= i-j+1;
                if(length<minimalSubarray)
                {
                    minimalSubarray=length;
                }
                sum-=nums[j];
                j++;
            }
        }
        if(minimalSubarray>n)
        {
            return 0;
        }
        else
        {
            return minimalSubarray;
        }
    }
};