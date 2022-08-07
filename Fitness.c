#include <stdio.h>

int main(void) {
    int T,X,total;
    scanf("%d",&T);
    
    for(int i=0;i<T;i++)
    {
        scanf("%d",&X);
        total=X*5*2;
        printf("%d\n",total);
    }
	return 0;
}
