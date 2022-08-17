#include <stdio.h>

int main(void) {
    int T,A,B,C,temp;
    scanf("%d",&T);
    
    for(int i=0;i<T;i++)
    {
        scanf("%d %d %d",&A,&B,&C);
        if(A>B || C>B)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
	return 0;
}
