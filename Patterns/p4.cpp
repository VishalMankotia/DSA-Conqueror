// 4
// * 
// * * 
// * * * 
// * * * * 

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 1 ;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "* ";
            j++;
        }
        i++;
        cout << "\n";
    }

    return 0;
}