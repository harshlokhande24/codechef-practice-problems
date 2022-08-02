#include <stdio.h>

int main(void) {
    int T,X,Y,total;
    scanf("%d",&T);
    
    for(int i=0;i<T;i++)
    {
        scanf("%d %d",&X,&Y);
        total= 4*X + Y;
        printf("%d\n",total);
    }
	return 0;
}