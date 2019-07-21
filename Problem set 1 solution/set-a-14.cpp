#include<iomanip>
#include<iostream>
#include<cmath>
using namespace std;

#define pi 2*acos(0.0)

int main()
{
    int n;
    cin >> n;
    if(n>1000)
        return 0;
    for(int x = 1 ; x <= n ; x++)
    {
        float r;
        cin >> r;
        if(r < 0 || r > 1000)
            return 0;
        float a;
        a=2*r;
        float b;
        b = pow(a,2);
        float c;
        c = pi * pow(r,2);
        cout << "Case " << x << " : " << fixed << setprecision(2) << abs(b-c) << endl;
    }
}
