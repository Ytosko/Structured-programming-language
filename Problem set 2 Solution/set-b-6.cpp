#include<iostream>
using namespace std;
int main()
{
    int x;
    int a=1;
    cin >> x;
    for(int i = 1 ; i <= x; i++)
    {
        a*=i;
    }
    cout << a << endl;
}
