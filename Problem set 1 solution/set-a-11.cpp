#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x;
    scanf("%d\n" , &x);
    for(int i = 0 ; i<x ; i++)
    {
        string c[100];
        getline(cin, c[i]);
        cout << "Case " << i+1 << " : " << c[i].size() << endl;
    }
}
