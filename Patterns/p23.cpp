// 4
//    1
//   22
//  333
// 4444
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
        int s = n - i;
        while (s)
        {
            cout << " ";
            s--;
        }
        

        while (j <= i)
        {

            
                cout << i;
            

            j++;
        }
        i++;
        cout << "\n";
    }

    return 0;
}