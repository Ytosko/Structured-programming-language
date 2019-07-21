#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x,y,i,j,k,l;
    cin >> x >> y;
    char a[x][y],b[x][y];
    for(i = 0 ; i<x ; i++)
    {
        for( j = 0 ; j<y ; j++)
        {
            cin >> a[i][j];
        }
    }
    for( i = 0,j=0 ; i<x ; i++,j++)
    {
            for( k = y-1 , l = 0 ; k >=0 ; k-- , l++)
            {
                b[j][l]=a[k][i];
            }
    }
     for( i = 0 ; i<x ; i++)
    {
        for( j = 0 ; j<y ; j++)
        {
            cout << b[i][j];
        }
        cout << "\n";
    }
}
