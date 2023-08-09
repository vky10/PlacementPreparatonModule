class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
    //     int m=text1.length();
    //     int n=text2.length();

    //        int c;
    //         if(m>=n){
    //         int j=0;
    //          c=0;
    //         for(int i=0;i<m;i++){
    //             if(text1[i]!=text2[j])
    //                 continue;
    //             else
    //             c++;
    //             j++;
    //         }
    // }
    //         else{
    //             int j=0;
    //              c=0;
    //             for(int i=0;i<n;i++){
    //         if(text1[j]==text2[i])
    //         {
    //                 c++;
    //                 j++;
    //         }
    //         else{
    //             continue;
    //         }   
    //         }
    //         }
      
    //    return c;

            int m = text1.size(), n = text2.size();
        int dp[m+1][n+1];
        
        for(int i = 0; i <= m; i++) {
            for(int j = 0; j <= n; j++) {
                if(i == 0 || j == 0) dp[i][j] = 0; 
                else if(text1[i-1] == text2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];  
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[m][n];

    }
};