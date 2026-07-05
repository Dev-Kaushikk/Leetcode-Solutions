class Solution {
public:
    int reverse(int x) {
        int reverseNum =0;
        int digit;
        while(x!=0)
        {
            digit=x%10;
            if (reverseNum > INT_MAX / 10 || (reverseNum == INT_MAX / 10 && digit > 7))
            {
                return 0;
            }
            if (reverseNum < INT_MIN / 10 ||(reverseNum == INT_MIN / 10 && digit < -8))
            {
                return 0;
            }
            reverseNum*=10;
            reverseNum = reverseNum+digit;
            x=x/10;
        }
        return reverseNum;
    }
};