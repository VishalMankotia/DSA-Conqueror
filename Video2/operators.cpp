#include<bits/stdc++.h>
using namespace std;
void Add(){
    int a, b;
    cout << "Enter the value of the a and b ";
    cin >> a >> b;

   int an=a+=b;
   cout<<an<<endl;
}
void Sub(){
    int a, b;
    cout << "Enter the value of the a and b ";
    cin >> a >> b;

   int an=a-=b;
   cout<<an<<endl;
}
void Mul(){
    int a, b;
    cout << "Enter the value of the a and b ";
    cin >> a >> b;

   int an=a*=b;
   cout<<an<<endl;
}
void Divide(){
    int a, b;
    cout << "Enter the value of the a and b ";
    cin >> a >> b;

   int an=a+=b;
   cout<<an<<endl;
}
void Mod(){
    int a, b;
    cout << "Enter the value of the a and b ";
    cin >> a >> b;

   int an=a%=b;
   cout<<an<<endl;
}
int main(){
    while (1)
    {
        // Use of Relational Operators
        cout<<"1. To do Addition\n";
        cout<<"2. To do Subtraction\n";
        cout<<"3. To do Multiplication\n";
        cout<<"4. To do Dividation\n";
        cout<<"5. To do Modulus\n";
        cout<<"6. TO Exit\n";
        int ch;
        cout<<"Enter the Choice\n";
        cin>>ch;
       
        switch (ch)
        {
        case 1:
           Add();
            break;
        case 2:
           Sub();
            break;
        case 3:
           Mul();
            break;
        case 4:
           Divide();
            break;
        case 5:
           Mod();
            break;
        case 6:
           exit(0);
            break;
        
        default:
        cout<<"Invalid Choice\n";
            break;
        }
       


        
    }
    

     return 0;
}