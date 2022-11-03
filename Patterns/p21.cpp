// 4
// ****
//  ***
//   **
//    *
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 1;
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        // int
        int s =  i-1;
        while (s)
        {
            cout << " ";
            s--;
        }
        s--;
      
        while (j <= n)
        {
           
            if (j <= n - i + 1)
            {
                cout << "*";
            }

            j++;
        }
        i++;
        cout << "\n";
    }

    return 0;
}