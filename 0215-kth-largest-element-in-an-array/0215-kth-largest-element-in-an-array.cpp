class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>q;
        for(int i=0;i<nums.size();i++){
            q.push(nums[i]);
        }
        int p=k-1;
        while(p>0){
            q.pop();
            p--;
        }
    return q.top();
    }
};