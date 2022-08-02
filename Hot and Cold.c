#include <stdio.h>

int main(void) {
    int T,C;
    scanf("%d",&T);
    
    for(int i=0;i<T;i++)
    {
        scanf("%d",&C);
        if(C>20)
        {
            printf("HOT\n");
        }
        else
        {
            printf("COLD\n");
        }
    }
	return 0;
}