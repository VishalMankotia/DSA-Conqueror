#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=7,b=5;
    cout<<"The & of the a & b is "<<(a&b)<<endl;
    cout<<"The | of the a | b is "<<(a|b)<<endl;
    cout<<"The ^ of the a ^ b is "<<(a^b)<<endl;
    cout<<"The ~ of the ~a  is "<<(~a)<<endl;
    cout<<"The left shift a<<1 is "<<(a<<1)<<endl;
    cout<<"The right shift a>>1 is "<<(a>>1)<<endl;

    int val = 20;

    // post-increment
    // first the value of val is used by temp
    // and then incremented by one
    int temp = val++;

    // the temp holds the value 20
    cout<<"Value of temp: " << val;
    return 0;
}