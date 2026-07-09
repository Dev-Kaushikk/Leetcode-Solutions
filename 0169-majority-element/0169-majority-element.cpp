class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
        int majority=nums[0];
        int count=0;
        for(int i=0;i<n;i++)
        {
            
            if(nums[i]== majority)
            {
                count++;
            }
            else 
            {
                if (count==0)
                {
                    majority=nums[i];
                }
                else
                {
                    count--;
                }
            }
        }
        return majority;
    }
};