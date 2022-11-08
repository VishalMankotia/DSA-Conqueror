#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans = 0, bit, i = 0;
    cin >> n;
    while (n != 0)
    {
        bit = n % 2;
        ans = bit * pow(10, i) + ans;
        n /= 2;
        i++;
    }
    cout << ans;

    return 0;
}