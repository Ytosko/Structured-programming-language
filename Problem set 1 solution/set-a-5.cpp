#include<iostream>
using namespace std;
int main()
{
int a,b;
string s;
cin >> a;
b=a;
while(a--)
{
    cin >> s;
    cout << "Case " << abs(a-b) << ": Hello " << s << endl;
}
}
