class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char a[128]={0};
        char b[128]={0};

        for(int i=0;i<s.size();i++){
            if(a[s[i]]!=b[t[i]]){
                return false;
            }
            else{
                a[s[i]]=i+1;
                b[t[i]]=i+1;
            }
        }
        return true;
    }
};