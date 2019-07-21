#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
int n;
cin >> n;
for(int i = 0 ; i < n ; i++)
{
string x,y;
cin >> x;
y=x;
reverse(y.begin() , y.end());
if(x == y)
cout << "Case " << i+1 << " : " << "Yes" << endl;
else
cout << "Case " << i+1 << " : " << "No" << endl;
}
}
