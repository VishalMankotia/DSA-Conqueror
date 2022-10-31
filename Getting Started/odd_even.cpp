#include<bits/stdc++.h>
using namespace std;
string odd_even(int n){
    return (n & 1) ? "Odd\n" : "Even\n";
}
int main(){
    int n;
    cout<<"Enter the no ";
    cin>>n;
  cout<<"The no is odd or even " <<odd_even(n);
    
}