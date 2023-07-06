class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro=0;
        int minprice=INT_MAX;
        for(int i=0;i<prices.size();i++){
            minprice=min(minprice,prices[i]);
            pro=max(pro,prices[i]-minprice);
        }
        return pro;
    }
};