//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
    // Your code goes here
    long long sum=0;
    int l=0;
    int h=len-1;
    while(l<h){
        if(A[l]<A[h]){
            sum=max(sum,(h-l)*A[l]);
            l++;
        }
        else{
            sum=max(sum,(h-l)*A[h]);
            h--;
        }
        
    }
    return sum;
    
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends