// 4
// D
// C D
// B C D
// A B C D
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        int s = 'A' + n - i;
         while (j <= i)
        {
            cout << char(s++) << " ";
            j++;
        }
        i++;
        cout << "\n";
    }

    return 0;
}