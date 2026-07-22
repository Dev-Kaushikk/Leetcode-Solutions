class Solution {
public:
    bool isPalindrome(string s) {
        int n= s.length();
        int left=0;
        int right = n-1;

        while(left<right)
        {
            
            if(isalnum(s[left]) && isalnum(s[right]) )
            {
                if(tolower(s[left]) == tolower(s[right]))
                {
                    left+=1;
                    right-=1;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                if(!isalnum(s[left]) )
                {
                    left+=1;
                }
                else
                {
                    right-=1;
                }

            }
        
        }
        return true;
    }
};