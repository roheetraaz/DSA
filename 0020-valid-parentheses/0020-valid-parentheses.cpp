class Solution
{
    public:
        bool isValid(string s)
        {
            stack<char> st;
            unordered_map<char, char> mp;
            mp[')'] = '(';  mp[']'] = '[';  mp['}'] = '{';
            for (auto i: s)
            {
                if (i == '(' || i == '{' || i == '[') st.push(i);
                else
                {
                    if (st.empty() or(mp[i] != st.top())) return false;
                    st.pop();
                }
            }
            return st.empty();
        }
};