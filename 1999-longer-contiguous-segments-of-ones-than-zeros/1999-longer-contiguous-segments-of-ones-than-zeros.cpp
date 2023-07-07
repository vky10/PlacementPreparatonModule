class Solution {
public:
    bool checkZeroOnes(string s) {
       int c1=0,c2=0;
       int maxi1=INT_MIN;
       int maxi2=INT_MIN;
       for(int i=0;i<s.size();i++){
           if(s[i]=='1'){
               c1++;
               maxi1=max(maxi1,c1);
               c2=0;
           }
           else{
               c1=0;
               c2++;
               maxi2=max(maxi2,c2);
           }
       }
       if(maxi1>maxi2)return true;
       else return false;
    }
};