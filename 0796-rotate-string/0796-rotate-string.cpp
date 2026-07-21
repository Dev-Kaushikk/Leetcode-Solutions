class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        int m = goal.length();
        if(n != m)
        {
            return false;
        }
        string concatenate = s +s;
        int j=0;
        int count=0;
        for(int i=0;i<concatenate.length() ; i++)
        {
            if(concatenate[i] == goal[j])
            {
                count+=1;
                j+=1;
                if(j==m)
                {
                    break;
                }
            }
            else 
            {
                count=0;
                j=0;
                if(concatenate[i] == goal[j])
                {
                    count+=1;
                    j+=1;
                }
            }
        }
        if(count == m)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};