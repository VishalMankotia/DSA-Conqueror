// 4
// A
// B C
// C D E
// D E F G
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 1 ;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        int s = 'A' + i-1; while (j <= i)
        {                                       
            cout << char(s++) << " ";
            // cout << char('A' + i + j - 2) << " ";
            j++;
        }
        i++;
        cout << "\n";
    }

    return 0;
}