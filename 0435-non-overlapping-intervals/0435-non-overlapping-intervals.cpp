
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& inter) {
       sort(inter.begin(),inter.end());      
       int n=inter.size();
       int pre=0;
       int ans=0;
       for(int i=1;i<n;i++){
           if(inter[i][0]<inter[pre][1]){
           ans++;
           if(inter[i][1]<=inter[pre][1]){
               pre=i;
           }
       }
       else{
           pre=i;
       }
       }
       return ans;
    }
};