class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int a;
        // for(int i=0;i<nums.size();i++){
        //     if((nums[i]^nums[i+1])==0){
        //        a=nums[i];
        //        break;
        //     }
        // }
        // return a;
        
        while(nums[0]!=nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];
    }
};