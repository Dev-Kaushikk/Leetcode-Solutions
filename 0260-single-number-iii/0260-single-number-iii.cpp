class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xorValue = 0;
        int first =0;
        int second=0;
        for (int i = 0; i < nums.size(); i++)
        {
            xorValue ^= nums[i];
        }
        int mask = 1;

        while ((xorValue & mask) == 0)
        {
            mask <<= 1;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] & mask)
            {
                first ^= nums[i];
            }
            else
            {
                second ^= nums[i];
            }
        }
        return {first, second};
    }
};