// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
    void swap(int *xp, int *yp) 
    { 
        int temp = *xp; 
        *xp = *yp; 
        *yp = temp; 
    }

	void segregateEvenOdd(int arr[], int n) {
	    // code here
	    vector<int> even,odd;
	    for(int i=0;i<n;i++){
	        if(arr[i]%2==0)
	        even.push_back(arr[i]);
	        else
	        odd.push_back(arr[i]);
	    }
	    if(n>1){
	    
	    // sort(even.begin(),even.end());
	    //  sort(odd.begin(),odd.end());

	    for(int i=0;i<even.size()-1;i++){
	         for(int j=0;j<even.size()-i-1;j++){
	             if(even[j]>even[j+1]){
	                 swap(&even[j],&even[j+1]);
	             }
	         }
	    }
	     
	    
	    for(int i=0;i<odd.size()-1;i++){
	         for(int j=0;j<odd.size()-i-1;j++){
	             if(odd[j]>odd[j+1]){
	                 swap(&odd[j],&odd[j+1]);
	             }
	         }
	    }
	    }
	    
	    for(int i=0;i<n;i++){
	        if(i<even.size())
	            arr[i]=even[i];
	            else
	            arr[i]=odd[i-even.size()];
	    }
	   
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregateEvenOdd(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends