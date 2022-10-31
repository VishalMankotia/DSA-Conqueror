#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=2,n;
    cin>>n;
    bool isprime=true;
    while (i<n)
    {
        if(n%i==0){
            cout<<"Non Prime\n";
            isprime=false;
            break;
        }
        i++;
    }
    if(isprime){
        cout<<"Prime\n";
    }
    
     return 0;
}