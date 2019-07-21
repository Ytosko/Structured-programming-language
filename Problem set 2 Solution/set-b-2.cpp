#include <iostream>

using namespace std;

int main()
{
    int n,x[1000],min=99999999;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> x[i];
        if(min > x[i])
            min = x[i];
    }
    cout << min << endl;
}
