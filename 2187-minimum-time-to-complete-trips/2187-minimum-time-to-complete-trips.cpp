class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long int start=1;long long int end=1000000000000000;
    
        while(start<end){
            long long int mid=start+(end-start)/2;
            long long int t_trips=0;
            for(int i=0;i<time.size();i++){
                t_trips+=mid/time[i];
                if(t_trips>totalTrips){
                    break;
                }
            }
            if(t_trips<totalTrips){
                start=mid+1;
            }
            else{
                end=mid;
            }
        }
        return start;
    }
};
// carefully look at boundary conditions to know about the testcases;