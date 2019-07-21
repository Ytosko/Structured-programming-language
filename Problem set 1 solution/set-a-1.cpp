#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
float m,n,a,b,x=0,j=1;
while(m--)
{
cin >> n;
for(int i=0; i<n; i++)
{
cin >> a;
x=x+a;
}
b=x/n;
cout << "Case " << fixed << setprecision(0) << j << " : " << fixed << setprecision(6) << b << endl;
j++;
x = 0;
b = 0;
}
}
