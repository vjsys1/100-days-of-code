#include<iostream>
#include<math.h>
using namespace std;
void countlog(int n)
{
    int c = log10(n);
    cout<<c+1;
}
void count(int n)
{  int c=0;
    while(n){
     c++; n=n/10;
    
    }
 cout<<c;    
}
void reverse(int n){
    int rev=0;
    while(n){
        int rem= n%10;
        rev = rev*10 + rem;
        n=n/10;
    }
    cout<<rev;
}
int main() {
reverse(123);
return 0 ;
}
