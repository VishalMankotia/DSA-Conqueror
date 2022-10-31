#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a+b>=c||b+c>a||c+a>=b){
        cout<<"The triangle is Valid\n";
    }
    else{
        cout<<"Not a Valid Triangle\n";
    }
     return 0;
}