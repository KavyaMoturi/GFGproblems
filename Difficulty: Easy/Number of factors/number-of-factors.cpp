//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int countFactors(int N){
        //code here
        int count=0;
        if(N==1) return 1;
        else{
        for(int i=1;i<=N/2;i++){
            if(N%i == 0) count++;
        }
        return count+1;
       }
}
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.countFactors(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends