#include <stdio.h>
#define int long long

void solve()
{
    int n, m, a, b;
    scanf("%lld %lld %lld %lld",&n,&m,&a,&b);
    n += m - 2 + a;
    a += b;
    if (n % 2 == 1 && a % 2 == 0)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }
}

signed main()
{
    int T;
    scanf("%lld",&T);
    while (T--)
    {
        solve();
    }
}
