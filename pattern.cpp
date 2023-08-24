//{ Driver Code Sta
#include <iostream>

using namespace std;

// } Driver Code Ends

    void print(int n) {
        // code here
        for(int i =0 ;i <n ;i++)
        {
            for(int j = 0 ; j<n-i;j++ )
            {
                cout<<" ";
            }
            for(int k=0 ; k<2*i + 1 ; k++)
            {
                cout<<"*";
            }
            for(int j = 0 ; j<n-i;j++ )
            {
                cout<<" ";
            }
            cout<<endl;
        }
    }
    void print1(int n) {
	    // code here
	
        // code here
        for(int i =0 ;i <n ;i++)
        {
            for(int j = 0 ; j<i;j++ )
            {
                cout<<" ";
            }
            for(int k=0 ; k<(2*n-1) - 2*i ; k++)
            {
                cout<<'*';
            }
            for(int j = 0 ; j<i;j++ )
            {
                cout<<" ";
            }
            cout<<endl;
        }
    }

//{ Driver Code Starts.

int main() {
     {
        int n=3;
       print(n);
    }
    return 0;
}
// } Driver Code Ends