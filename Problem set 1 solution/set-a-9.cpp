#include<iostream>
using namespace std;
int main()
{
long long x,n,c=0,a;
cin >> n;
x=n;
while(n--)
{
cin >> a;
cout << "Case " << abs(n-x);
c = 0;
for(long long int i=1; i<=a; i++)
{
if(a%i == 0)
{
    c++;
}
}
if(c == 2)
{
 cout << " : Yes" << endl;
}
else
{
    cout << " : No" << endl;
}
}
}
