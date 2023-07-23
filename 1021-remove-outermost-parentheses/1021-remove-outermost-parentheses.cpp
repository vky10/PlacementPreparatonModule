class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        string a="";
        for(auto c:s){
            if(c=='('){
                if(count>0){
                    a+='(';
                }
                count++;
            }
            else{
                if(count>1){
            a+=')';
                }
                count--;
            }
        }
        return a;
    }
};