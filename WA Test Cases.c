#include <stdio.h>
#define min(x,y) (((x)<(y))?(x):(y))

void temp()
{
    int n, t;
    char s[100];
    int a[n];
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%s", s);
    t=101;
    for(int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            t = min(t, a[i]);
        }
    }
    printf("%d\n",t);   
}

int main() {
    int T;
    scanf("%d",&T);
    
    while(T--)
    {
        temp();
    }
}
