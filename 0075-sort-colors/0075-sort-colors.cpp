class Solution {
public:
    void sortColors(vector<int>& arr) {
        // int a=0,b=0,c=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0){
        //         a++;
                
        //     }
        //     if(nums[i]==1){
        //         b++;
                
        //     }
        //     if(nums[i]==2){
        //         c++;
                
        //     }
        // }
        
        // for(int i=0;i<a;i++){
        //     nums[i]=0;
        // }
        // for(int i=a;i<a+b;i++){
        //     nums[i]=1;
        // }
        // for(int i=a+b;i<a+b+c;i++){
        //     nums[i]=2;
        // }
        int n=arr.size();
    int low=0, mid=0, high=n-1;
   while(mid<=high){
      if(arr[mid]==0){
         swap(arr[mid],arr[low]);
         mid++;
         low++;
      }
      else if(arr[mid]==1){
         mid++;
      }
      else{
         swap(arr[mid],arr[high]);
         high--;
      }
   } 
    }
};