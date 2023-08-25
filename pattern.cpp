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
    void print2(int n) {
        
        // code here
        for(int i =0 ;i<n;i++)
        {
            for(int j=0;j<n-i-1;j++){
                cout<< " ";
            }
            for(int j=0;j<i+1;j++){
                cout<< '*';
                cout<<" ";
                
            }
            for(int j=0;j<n-i-1;j++){
                cout<< " ";
            }
            cout<<endl;
            
        }
         for(int i =0 ;i<n;i++)
        {
            for(int j=0;j<i;j++){
                cout<< " ";
            }
            for(int j=0;j<n-i;j++){
                cout<< '*';
                cout<<" ";
            }
            for(int j=0;j<n-i;j++){
                cout<< " ";
            }
            cout<<endl;
            
        }
        
    }
    void print3(int n)
    {
        
        // code here
        for(int i = 1 ;i<=n;i++)
        {
            for(int j=1 ; j<=i ; j++)
            {
                cout<<j;
                cout<< " ";
            }
            for(int j=2*(n-i) ; j>0 ; j--)
            {
                cout<< " ";
            }
                for(int j=2*(n-i) ; j>0 ; j--)
            {
                cout<< " ";
            }
         
            for(int j=i ; j>0 ; j--)
            {
                cout<<j;
                cout<< " ";
                
          
            }
            
            cout<<endl;
        }
    }
    
//{ Driver Code Starts.

int main() {
     {
        int n=3;
       print3(n);
    }
    return 0;
}
// } Driver Code Ends