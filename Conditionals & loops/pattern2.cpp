// 3
// 1 1 1 
// 2 2 2 
// 3 3 3 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;
    while (i<=n)
    {
       int j=1;
       while (j<=n)
       {
        cout<<i<<" ";
        j++;
       }
       i++;
       cout<<"\n";
       
    }
    
     return 0;
}