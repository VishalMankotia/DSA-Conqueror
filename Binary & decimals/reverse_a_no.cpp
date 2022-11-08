#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans = 0 ;
    cin >> n;
    while (n != 0)
    {
        int digits = n %10;
        ans=ans*10+digits;
            n = n / 10;
    }
    cout << "The Reverse is: " << ans << endl;

    return 0;
}