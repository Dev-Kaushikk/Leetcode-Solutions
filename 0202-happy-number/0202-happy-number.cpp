class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> mp;
        while(n>1)
        {
            if(mp.find(n) != mp.end())
            {
                return false;
            }
            else
            {
                mp.insert(n); 
            }
            int square=0;;
            while(n>0)
            {
                int digit=n%10;
                square+= digit*digit;
                n/=10;
            }
            n=square;
        }
        return true;
    }
    
};