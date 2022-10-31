#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, sum = 0, t1;

    cout << "Enter the Total no of the nos:";
    cin >> t;
    t1 = t;
    while (t1 != 0)
    {
        int n;

        cout << "Enter the nos: \n";
        cin >> n;
        sum += n;
        t1--;
    }
   
    cout << "The mean is : " << sum / t << endl;
    return 0;
}