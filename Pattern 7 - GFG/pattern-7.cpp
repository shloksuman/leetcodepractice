//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i = n , k = 0 ; i>0 ; i-- , k++){
        //space print
        for(int j = i-1 ; j>0 ; j--){
            cout << " " ;
        }
        //star print
        for(int s=0 ; s<2*k+1 ; s++){
            cout << "*" ;
        }
        cout << endl ; }
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends