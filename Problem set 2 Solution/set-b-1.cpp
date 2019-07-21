#include <iostream>

using namespace std;

int main()
{
    int n,x[1000],max=0;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> x[i];
        if(max < x[i])
            max = x[i];
    }
    cout << max << endl;
}
