// 4
//    1
//   23
//  456
// 78910
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 1,c=1;
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

            
                cout << c++;
          

            j++;
        }
        i++;
        cout << "\n";
    }

    return 0;
}