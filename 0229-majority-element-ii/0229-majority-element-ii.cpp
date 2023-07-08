class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // unordered_map<int,int>m;
        // for(int i=0;i<n;i++){
        //     m[nums[i]]++;
        // }
        // for(auto it:m){
        //     if(it.second>n/3){
        //         a.push_back(it.first);
        //     }
        // }
        // return a;
        
        int c1=0;
        int c2=0;
        int el1=INT_MIN,el2=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(c1==0 and nums[i]!=el2){
                c1=1;
                el1=nums[i];
            }
            else if(c2==0 and nums[i]!=el1){
                c2=1;
                el2=nums[i];
            }

            else if(nums[i]==el1)c1++;
            else if(nums[i]==el2)c2++;
            else {
                c1--;
                c2--;
            }

        }

        vector<int>v;
        c1=0;
        c2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==el1)c1++;
            if(nums[i]==el2)c2++;
        }
        
        if(c1>(nums.size())/3)v.push_back(el1);
        if(c2>(nums.size())/3)v.push_back(el2);

        return v;
    }
};