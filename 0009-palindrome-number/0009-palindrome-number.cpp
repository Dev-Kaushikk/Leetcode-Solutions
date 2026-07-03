class Solution {
public:
    bool isPalindrome(int x) {
        long long num=0;
        int duplicate=x;
        while(duplicate>0)
        {
            num = num*10;
            num = num+duplicate%10;
            duplicate= duplicate/10;
            
        }
        if(num==x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};