//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > mat, int n, int m) 
    {
        
        int top=0,bottom=n-1,l=0,r=m-1;
        vector<int>a;
        for(int i=0;i<m;i++){
            a.push_back(mat[0][i]);
            mat[0][i]=-1;
        }
        
        for(int i=0;i<n;i++){
            if(mat[i][m-1]!=-1){
            a.push_back(mat[i][m-1]);
            mat[i][m-1]=-1;
            }
        }
        
        for(int i=m-1;i>=0;i--){
            if(mat[n-1][i]!=-1){
            a.push_back(mat[n-1][i]);
            mat[n-1][i]=-1;
            }
        }
        
         for(int i=n-1;i>=0;i--){
            if(mat[i][0]!=-1){
            a.push_back(mat[i][0]);
            mat[i][0]=-1;
            }
        }
        return a;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends