#include<iostream>
using namespace std;

int main()
{
    int x,y,z=0;
    cin >> x >> y;
    for(int i = x ; i <= y ; i++)
    {
        z+=i;
    }
    cout << z << endl;
}
