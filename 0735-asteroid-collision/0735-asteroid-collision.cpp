class Solution
{
    public:
        vector<int> asteroidCollision(vector<int> &a)
        {
            stack<int> st;
            vector<int> v;
            for (auto i: a)
            {
                if (!st.size() or i > 0) st.push(i);
                else
                {
                    while (st.size() and abs(i) > st.top() and st.top() > 0)
                        st.pop();
                    if (!st.size() or st.top() < 0) st.push(i);
                    if (st.size() and st.top() == abs(i)) st.pop();
                }
            }
            while (st.size())
            {
                v.push_back(st.top());
                st.pop();
            }
            reverse(v.begin(), v.end());
            return v;
        }
};