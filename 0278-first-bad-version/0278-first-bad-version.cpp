// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int high=n;
        int low=1;
        int mid=0;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            bool api=isBadVersion(mid);
            if(api)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;
    }
};