#include <stdio.h>

int main(void) {
    int T,X,max;
    scanf("%d",&T);
    
    for(int i=0;i<T;i++)
    {
        scanf("%d",&X);
        max=(X*60)/30;
        printf("%d\n",max);
    }
	return 0;
}
