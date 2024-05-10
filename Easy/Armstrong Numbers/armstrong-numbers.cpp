//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // declaration of variables
        int sum=0;
        int t=n;
      while(t){
        //rem variable gives us the remainder which are individual digits of given number
          int rem = t%10;
          //sum of cube of individual digits
          sum= sum+ (rem*rem*rem);
          t=t/10;
      }
      //if sum is equal to given number then it is an armstrong number
      if (sum == n){ 
          
          return "Yes";
      }
        //or else not an armstrong number
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
