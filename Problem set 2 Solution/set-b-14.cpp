#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i;
string s;
getline(cin >> ws , s);
reverse(s.begin(),s.end());
for(char c : s)
{

    if(c>='A' && c<='Z' || c>='a' && c<='z' || c>='0' && c<='9')
    {
       cout << c;
    }

    else continue;
}
}
