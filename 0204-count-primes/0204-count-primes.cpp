class Solution {
public:
    int countPrimes(int n) {
       int j=0;
       vector <bool> prime(n,true);
       if (n<2)
       {
        return 0;
       }
       prime[0]=prime[1]= false;
       int count=0;
       for(int i=2;i*i<=n;i++)
       {
        if(prime[i])
        {
            j=i*i;
            while(j<n)
            {
                prime[j]=false;
                j+=i;
            }
        }
       }
       for(int i=0;i<n;i++)
       {
        if(prime[i]==true)
        {
            count+=1;
        }
       }
    return count;
    }
};