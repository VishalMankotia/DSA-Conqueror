#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0, ans = 0, i = 0;
    cin >> n;

    while (n != 0)
    {
        // cout << ans << endl;
        int bit = n & 1;
        // cout<<"The bit 1 is "<<bit<<;
        if(bit==1){
            ans = bit * pow(10, i) + ans;
            count++;
        }
        // cout << ans << endl;
        
        n=  n >> 1;
        i++;
        
    }
    
    cout<<"The binary representation of the "<<ans<<endl;
    cout << "The no of the set bits are: " << count << endl;
     

   

    return 0;
}