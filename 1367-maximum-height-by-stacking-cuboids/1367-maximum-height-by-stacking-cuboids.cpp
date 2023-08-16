class Solution
{
    public:
        bool check(vector<int> currBox, vector<int> newBox)
        {
            if (currBox[0] >= newBox[0] && currBox[1] >= newBox[1] && currBox[2] >= newBox[2])
                return true;
            else
                return false;
        }
    int solveTab(vector<vector < int>> &nums, int n)
    {
        vector<int> currrow(n + 1, 0);
        vector<int> nextrow(n + 1, 0);
        for (int curr = n - 1; curr >= 0; curr--)
        {
            for (int prev = curr - 1; prev >= -1; prev--)
            {
               	// INCLUDE THE HEIGHT 
                int take = 0;
                if (prev == -1 || check(nums[curr], nums[prev]))	//
                    take = nums[curr][2] + nextrow[curr + 1];

               	// EXCLUDE THE HEIGHT
                int notake = 0 + nextrow[prev + 1];

                currrow[prev + 1] = max(take, notake);
            }
           	// after ervy iteration upper row will be equal to currrow 
            nextrow = currrow;
        }
        return nextrow[0];
    }

    int maxHeight(vector<vector < int>> &cuboids)
    {
       	// sort each cuboid 
        for (auto &a: cuboids)
        {
            sort(a.begin(), a.end());
        }

       	// sort cuboids on the basis of l or w
        sort(cuboids.begin(), cuboids.end());

        return solveTab(cuboids, cuboids.size());
    }
};