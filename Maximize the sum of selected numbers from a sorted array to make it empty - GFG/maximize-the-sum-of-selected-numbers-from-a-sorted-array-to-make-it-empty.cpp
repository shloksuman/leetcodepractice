//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
class Solution{
    public:
    int maximizeSum(int a[], int n) 
    {
          vector<int> arr(a[n-1]+1,0);

        

        for(int i=0;i<n;i++){

            arr[a[i]]++;

        }

        

        int ans = 0;

        

        int i=a[n-1];

        

        while(i>0){

            if(arr[i] > 0){

                int cnt = arr[i];

                ans = ans + cnt*i;

                arr[i-1] -= cnt;

            }

            i--;

        }

        return ans;
    }

};


//{ Driver Code Starts.



int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        Solution ob;
        
        cout << ob.maximizeSum(arr, n) << endl;
        
        
    }

}


// } Driver Code Ends