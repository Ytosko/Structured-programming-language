#include<iostream>
using namespace std;
int main()
{
    int j,c=0;
    for(int i=2;i<(1500*1500);i++)
    {   for( j=2;j<i;j++)
        {
            if(i%j==0)
                break;

        }
        if(i==j)
        {
            c++;
            if(c==1500)
            {
                cout<<i;  return 0;
            }
        }
    }
    return 0;
}
