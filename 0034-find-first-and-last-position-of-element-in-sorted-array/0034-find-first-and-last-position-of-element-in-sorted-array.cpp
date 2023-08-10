class Solution {
public:
         int firstocc(vector<int>&nums,int target){
         int n=nums.size();
           int l=0;
           int h=n-1;
            while(l<=h){
                int mid=l+(h-l)/2;
                if(nums[mid]>target)
                h=mid-1;

                else if(nums[mid]<target)
                 l=mid+1;

                 else{
                     if(mid==0|| nums[mid]!=nums[mid-1])
                     return mid;

                     else
                         h=mid-1;
            }
        }
        return -1;
         }
              
              int lastocc(vector<int>&nums,int target){
                  int n=nums.size();
                  int l=0;
                  int h=n-1;
               while(l<=h){
                int mid=l+(h-l)/2;
                if(nums[mid]>target)
                h=mid-1;

                else if(nums[mid]<target)
                 l=mid+1;

                 else{
                     if(mid==n-1 || nums[mid]!=nums[mid+1])
                     return mid;

                     else
                         l=mid+1;
            }
        }
        return -1;

              }
    vector<int> searchRange(vector<int>& nums, int target) {
             int a=firstocc(nums,target);
             int b=lastocc(nums,target);
       return {a,b};      
    }
};