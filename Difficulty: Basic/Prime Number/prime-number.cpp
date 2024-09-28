//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isPrime(int N){
        // code here
        int count=0;
        if(N==1) return 0;
        
        else{
        for(int i=1;i<=sqrt(N);i++){
            if(N%i==0){
                count++;
            }
        }
        if(count==1) return 1;
        else return 0;
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
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends