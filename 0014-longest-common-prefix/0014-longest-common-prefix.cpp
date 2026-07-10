class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string first= strs[0];
        int n= first.size();
        for(int i=1;i<strs.size();i++)
        {
            if(strs[i].size()<=n)
            {
                n= strs[i].size();
            }
        }
        string ans="";
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<strs.size();j++)
            {
                if(first[i]== strs[j][i])
                {
                    
                }
                else
                {
                    return ans;
                }
            }
            ans += first[i];
        }
        return ans;
    }
};