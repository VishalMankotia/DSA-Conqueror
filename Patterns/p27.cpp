// 5
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        // Ist Triangle

        while (j <= n)
        {
            if (j <= n - i + 1)
            {
                cout << j;
            }
            else
            {
                cout << "*";
            }
            j++;
        }
        // 2nd triangle

        int sp = i - 1;
        while (sp)
        {
            cout << "*";
            sp--;
        }

        int start = n - i + 1;
        while (start)

        {
            cout << start;
            start--;
        }

        i++;
        cout << "\n";
    }

    return 0;
}