#include <stdio.h>
#include <math.h>

int main()
{
    int N,a,b,c;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>b && a>c)
        {
            printf("Alice\n");
        }
        else if(a<b && b>c)
        {
            printf("Bob\n");
        }
        else
            printf("Charlie\n");
    }
    
}
