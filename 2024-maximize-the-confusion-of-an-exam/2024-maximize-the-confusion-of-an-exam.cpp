class Solution {
public:
    int maxConsecutiveAnswers(string ans, int k) {
        int n=ans.size();
        int c1=0;
        int j=0;
        int res1=0;
        for(int i=0;i<n;i++){
            if(ans[i]=='T')c1++;
            while(c1>k){
                if(ans[j]=='T')
                    c1--;
                    j++;    
            }
            res1=max(res1,i-j+1);
        }
        int c2=0;
        int res2=0;
        j=0;
        for(int i=0;i<n;i++){
            if(ans[i]=='F')c2++;
            while(c2>k){
                if(ans[j]=='F')
                    c2--;
                    j++;    
            }
            res2=max(res2,i-j+1);
        }  
        return max(res1,res2);  
    }
};