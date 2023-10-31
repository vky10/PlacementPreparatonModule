class Solution {
public:
    vector<int> findArray(vector<int>& p) {
        
        vector<int>a;
        a.push_back(p[0]);
        for(int i=1;i<p.size();i++){
           a.push_back(p[i]^p[i-1]);
        }
        return a;
    }
};