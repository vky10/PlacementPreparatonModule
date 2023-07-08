class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int,int>m;
        // for(int i=0;i<nums.size();i++){
        //     m[i]++;
        // }
        // int max=nums[0];
        // for(auto pr:m){
        //     if(pr.second>max){
        //         max=pr.second;
        //     }
        // }
        // return max;
        sort(nums.begin(),nums.end());
        int l=0;
        int h=nums.size()-1;
        return nums[(l+h)/2];

    }
};