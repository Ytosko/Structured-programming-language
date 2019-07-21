#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main ()
{
    string m;
    size_t a;
    string s;
    getline(cin , s);
    size_t x;
    cin >> x;
    for(int i = 1 ; i<=x ; i++)
    {
        getline(cin >> ws , m);
        a=s.find(m);
        if(a != string::npos)
        {
            cout << "Case " << i << " : " << "Yes" << endl;
        }
        else if(a == string::npos)
        {
            cout << "Case " << i << " : " << "No" << endl;
        }

    }
}
