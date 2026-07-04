class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        // int left=1;
        int rightproduct=1;
        vector<int> arr(n);
        
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                arr[i]= 1;
            }
            else
            {
                arr[i]=arr[i-1]*nums[i-1];
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            arr[i]=arr[i]*rightproduct;
            rightproduct= rightproduct*nums[i];
        }
    return arr;
    }
};