class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       
       int n=s.size();
       if(n==0){
           return 0;
       }
       int l=0;
       unordered_set<int>a;
       int maxi=INT_MIN;
       for(int r=0;r<n;r++){
           if(a.find(s[r])!=a.end()){
               while(l<r && a.find(s[r])!=a.end()){
                   a.erase(s[l]);
                   l++;
               }
           }
           a.insert(s[r]);
           maxi=max(maxi,r-l+1);
       }
       
       return maxi;
    }
};