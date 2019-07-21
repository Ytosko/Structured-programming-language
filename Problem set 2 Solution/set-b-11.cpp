#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x;
    cin >> x;
    int y = x;
    if(x>y)
    {
    int a;
    a=x;
    float b = x - a;
    float c = 1-b;
    float d = x+c;
    int e = d;
    cout << y << " " << e << endl;
    }
    else cout << y << " " << y << endl;
}
