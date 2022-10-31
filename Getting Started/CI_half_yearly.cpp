#include<bits/stdc++.h>
using namespace std;
int main(){
    float p,r,t;
    cout<<"Enter the amount of the principal , Rate , Time\n";

    cin>>p>>r>>t;
    float amount=p*(pow(1+r/200,2*t));
    cout<<"The Compound Interest half yearly is: \n"<<amount-p<<endl;
}