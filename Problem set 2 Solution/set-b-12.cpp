#include<iostream>
using namespace std;
int main()
{
    float x;
    cin >> x;
    int a = x;
    float b = x-a;
    float c = b*10;
    if(c < 5)
    {
        cout << a << endl;
    }
    else
    {
        cout << a+1 << endl;
    }
}
