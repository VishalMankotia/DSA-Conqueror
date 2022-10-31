#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cin>>y;
    if(y%4==0 && y%100!=0 ||y%400==0){
        cout<<"The Year is a Leap Year\n";

    }

    else{
        cout<<"The Year is not a Leap year\n";
    }
     return 0;
}