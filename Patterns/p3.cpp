// 3
// 1 2 3 
// 4 5 6 
// 7 8 9

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 1,count=1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count++ << " ";
            j++;
        }
        i++;
        cout << "\n";
    }

    return 0;
}