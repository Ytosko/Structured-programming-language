#include<iostream>
using namespace std;
int main()
{
int a;
while(cin >> a)
    {
        if(a>=1)
        {
        cout << "Divisors of " << a << ": 1" ;
       for(int i=2; i<=a; i++)
       {
           if(a%i==0)
            cout << ", " << i << " " ;
       }
        }
        else cout << "0" ;
    }
}
