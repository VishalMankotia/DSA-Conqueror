// 4
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout <<i<< " ";
            j++;
        }
        i++;
        cout << "\n";
    }

    return 0;
}