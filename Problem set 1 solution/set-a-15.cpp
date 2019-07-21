# include <stdio.h>
int main()
{
    long long t,a,i,p,r;
    while(scanf("%lld %lld",&a,&p)==2)
    {
        if(a== 0 && p == 0)
            return 0;
        r = 1;
        while(p)
        {
            if(p%2) r = (r*a)%100007;
            a = (a*a)%100007;
            p/=2;
        }
        printf("%lld\n",r);
    }
    return 0;
}
