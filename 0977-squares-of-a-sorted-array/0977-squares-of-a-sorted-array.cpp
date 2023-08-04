class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int k=0;
       int n=nums.size();
        for(int i=0;i<nums.size();i++){
            nums[k]=nums[i]*nums[i];
            k++;
        }
        int l=0;
        int h=n-1;
        vector<int>v(n,0);
        for(int i=n-1;i>=0;i--){
            if(nums[l]>=nums[h]){
                v[i]=nums[l];
                l++;
            }
            else{
                v[i]=nums[h];
                h--;
            }
        }
        return v;
    }
};