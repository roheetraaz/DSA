class Solution {
public:
    bool rotateString(string s, string goal) {
        string ans=s+s;
        return (ans.find(goal)!=string::npos && s.length()==goal.length());
    }
};