//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        while(b){
            
            int rem=a%b;
            if(rem==0){
                return b;
            }
            a=b;
            b=rem;
            }
          
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int a;
        scanf("%d",&a);
        
        
        int b;
        scanf("%d",&b);
        
        Solution obj;
        int res = obj.gcd(a, b);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends