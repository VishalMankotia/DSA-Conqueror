// 3
// A B C 
// B C D 
// C D E 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        int s = 'A' + n -4+ i;
        while (j <= n)
        {
            cout << char(s++) << " ";
            j++;
        }
        i++;
        cout << "\n";
    }

    return 0;
}

