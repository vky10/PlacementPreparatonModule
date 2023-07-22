class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int>s;
        int n=num.size();
       if(num.length() <= k)
            return "0";
        if(k == 0)
            return num;

        s.push(num[0]);
        for(int i=1;i<n;i++){
            while(!s.empty() and num[i]<s.top() and k>0 ){
                s.pop();
                k--;
             }
             s.push(num[i]);
          if(s.size() == 1 && num[i] == '0')
                s.pop();
        }


            while(k>0 and !s.empty()){
                s.pop();
                k--;
            }

        string a="";
        while(!s.empty()){
            a+=s.top();
            s.pop();
        }
        reverse(a.begin(),a.end());
        if(a.size()==0) return "0";
        return a;
    }
};