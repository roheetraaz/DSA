class Solution
{
    public:
        int numEnclaves(vector<vector < int>> &arr)
        {
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
            int n = arr.size();
            int m = arr[0].size();
            queue<pair<int, int>> q;
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
                    {
                        if (arr[i][j] == 1)
                        {
                            q.push({ i,
                                j });
                            count++;
                        }
                    }
                    else if (arr[i][j] == 1) count++;
                }
            }
           	// cout<<count<<endl;
            int dx[] = { 0,
                0,
                1,
                -1
            };
            int dy[] = { 1,
                -1,
                0,
                0
            };
            while (q.size())
            {
                int x = q.front().first;
                int y = q.front().second;
                if (arr[x][y] == 1)
                {
                    arr[x][y] = 0;
                    count--;
                }

                q.pop();
                for (int i = 0; i < 4; i++)
                {
                    int nx = x + dx[i];
                    int ny = y + dy[i];
                    if (nx >= 0 and ny >= 0 and nx < n and ny < m and arr[nx][ny] == 1)
                    {
                        q.push({ nx,
                            ny });
                        arr[nx][ny] = 0;
                        count--;
                        cout << nx << " " << " " << ny << endl;
                    }
                }
            }

            return count;
        }
};