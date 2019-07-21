#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int n,m;
cin >> n;
m=n;
while(n--)
{
 float a,b,c,x,y,z;
 cin >> a >> b >> c >> x >> y >> z;
 cout << "Case " << abs(m-n);
 cout << " : x = " << fixed << setprecision(3) << (c*y - b*z)/(a*y - b*x) << " , y = " << fixed << setprecision(3) << (a*z - c*x)/(a*y - b*x) << endl;

}
}
