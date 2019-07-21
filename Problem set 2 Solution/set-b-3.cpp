#include <iostream>

using namespace std;

int main()
{
    int n,x[1000],max=0,min=9999999;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> x[i];
        if(max < x[i])
            max = x[i];
        if(min > x[i])
            min = x[i];
    }
    cout << max-min << endl;
}
