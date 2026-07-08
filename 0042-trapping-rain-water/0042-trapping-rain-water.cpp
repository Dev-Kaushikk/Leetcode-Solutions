class Solution {
public:
    int trap(vector<int>& height) {
        int maxWater=0;
        int n= height.size();
        vector<int> leftMax(n);
        vector<int> rightMax(n);
        leftMax[0]= height[0];
        for(int i=1;i<n;i++)
        {
            leftMax[i] = max(leftMax[i-1],height[i]);
        }
        rightMax[n-1]= height[n-1];
        for(int i=n-1;i>0;i--)
        {
            rightMax[i-1] = max(rightMax[i],height[i-1]);
        }
        for(int i=0;i<n-1;i++)
        {
            maxWater+= (min(leftMax[i],rightMax[i])-height[i]);
            
        }
        return maxWater;
    }
};