// 1281. Subtract the Product and Sum of Digits of an Integer

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,mul=1,sum=0,digit;
    cin>>n;
    while (n!=0)
    {
        digit=n%10;
        mul*=digit;
        sum+=digit;
        n=n/10;
    // n--;
    }
    int ans= mul-sum;
    cout<<"The ans is "<<ans<<endl;
     return 0;
}