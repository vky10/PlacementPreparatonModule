class Solution {
public:
    string largestOddNumber(string num) {
        string s="";
       int n=num.size()-1;
       while(n>=0){
         if((num[n]-'0')%2!=0){
           break;
         }
         else{
           n--;
         }
       }
       for(int i=0;i<=n;i++){
         s+=num[i];
       }
       return s;
    }
};