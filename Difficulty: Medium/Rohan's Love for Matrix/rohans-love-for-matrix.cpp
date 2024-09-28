//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int firstElement(int n) {
        // code here
        int n1=1,n2=1,sum=0;
        if(n==1||n==2){
            return 1;
        } 
       else{ 
        while(n-2>0){
            sum=(n1+n2)%1000000007;
            n2=n1;
            n1=sum;
            n--;
        }
        return sum;
       }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.firstElement(n) << endl;
    }
    return 0;
}

// } Driver Code Ends