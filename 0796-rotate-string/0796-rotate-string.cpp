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
        if (concatenate.find(goal) != string::npos)
        {
            return true;
        }      
        else
        {
            return false;
        }
    }
};