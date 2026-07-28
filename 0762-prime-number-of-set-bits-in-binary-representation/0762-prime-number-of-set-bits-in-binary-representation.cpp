class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int prime=0;
        for (int num = left; num <= right; num++)
        {
            int temp=num;
            int count=0;
            while (temp != 0)
            {
                if(temp&1)
                {
                    count+=1;
                }
                temp>>=1;
            }
            if (count > 1)
            {
                bool isprime = true;
                for(int i=2;i*i<=count;i++)
                {
                    if (count % i == 0)
                    {
                        isprime=false;
                        break;
                    }
                }
                if(isprime)
                {
                    prime+=1;
                }
            }
            
        }
        return prime;
        
    }
};