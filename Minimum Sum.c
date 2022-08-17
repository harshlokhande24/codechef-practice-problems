#include <stdio.h>

int nope(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return nope(b, a % b);
}

void sup()
{
    long long int n, x, t, temp;
    scanf("%lld %lld",&n,&x);
    for (int i = 1; i < n; ++i)
    {
        scanf("%lld",&t);
        x = nope(x, t);
    }
    temp = x * n;
    printf("%lld",temp);
}

int main()
{
    int T;
    scanf("%d",&T);
    while (T--)
    {
        sup();
    }
}
