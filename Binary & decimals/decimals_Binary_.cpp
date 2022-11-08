#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0,i=0;
    cin>>n;
    while (n!=0)
    {
         int bits=n&1;
         if(bits==1){
            ans=bits*pow(10,i)+ans;
         }
         i++;
        n=n>>1;
    }
    cout<<"The binary representation is: "<<ans<<endl;
    
     return 0;
}