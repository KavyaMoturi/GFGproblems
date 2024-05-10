//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int sum=0;
        int t=n;
      while(t){
          int rem = t%10;
          sum= sum+ (rem*rem*rem);
          t=t/10;
      }
      
      if (sum == n){ 
          
          return "Yes";
      }
      else {
          
          return "No";
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
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends