#include <stdio.h>

int main(void) {
    int T,X,Y;
    scanf("%d",&T);
    
    for(int i=0;i<T;i++)
    {
        scanf("%d %d",&X,&Y);
        if(Y<=X)
        {
            printf("%d\n",Y);
        }
        else
        {
            printf("%d\n",X);
        }
    }
	return 0;
}