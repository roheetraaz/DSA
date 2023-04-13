class Solution
{
    public:
        bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
        {
            stack<int> st;
            int n = pushed.size();
            int j = 0;
            st.push(pushed[0]);
            int i = 1;
            int count=0;
            while (i <=n && j < n)
            {
                // cout << st.top() << "   " << endl;
                if (!st.empty() && st.top() == popped[j])
                {
                    st.pop();
                    j++;
                }
                else
                {
                    if(i<n)st.push(pushed[i]);
                    i++;
                }
            }
            return j == n;
        }
};