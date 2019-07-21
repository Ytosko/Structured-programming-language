#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    long long int x;
    int a,b=1,c,dec = 0;
    cin >> x;
    while(x>0)
    {
        a=x%10;
        dec+=(a*b);
        b*=2;
        x/=10;

    }
    cout << dec << endl;
}
