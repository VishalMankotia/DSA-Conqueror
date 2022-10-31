#include<bits/stdc++.h>
using namespace std;
int main(){
    int fib1=0,fib2=1,fibNext,i=1,n;
    cin>>n;
    if(n==0){
        cout<<"0 ";
    }
    if(n==1){
        cout<<"1 ";
    }
    cout<<"0 "<<"1"<<" ";
    while (i<=n)
    {
         fibNext=fib1+fib2;
         cout<<fibNext<<" ";
         int temp=fib2;
         fib2=fibNext;
         fib1=temp;
         i++;
    }
    
     return 0;
}