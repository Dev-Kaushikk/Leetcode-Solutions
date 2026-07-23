class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count = 0;
        int tempCount=0;
        for (int i=0;i<n;i++)
        {
            if(nums[i]== 1)
            {
                tempCount+=1 ;
                count = max(count, tempCount);
            }
            else
            {
                tempCount=0;
            }
        }
        return count;
    }
};