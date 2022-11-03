//  

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=1,n;
    cin>>n;
    while (i<=n)
    {
        int spaces=n-i;
        // Ist triangle

        while(spaces){
            cout<<" ";;
            spaces--;
        }
        int j=1;
        while (j<=i)
        {
            cout<<j++;

        }
int start=i-1;

        while (start)
        { 
                cout << start;
                start--;
        }
    
        i++;
        cout<<"\n";
        
    }
    
     return 0;
}