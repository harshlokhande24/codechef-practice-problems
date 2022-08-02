#include <stdio.h>

int main(void) {
    int T,N,totwat;
    scanf("%d",&T);
    
    for(int i=0;i<T;i++)
    {
        scanf("%d",&N);
        totwat=2*N;
        printf("%d\n",totwat);
    }
	return 0;
}