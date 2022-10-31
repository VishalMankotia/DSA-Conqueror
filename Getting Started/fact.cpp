#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=2,fact=1,n;
    cin>>n;
    while (i<=n)
    {
        fact*=i;
        i++;
    }
    cout<<fact<<endl;
     return 0;
}