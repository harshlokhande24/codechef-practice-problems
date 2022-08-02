#include <stdio.h>

int main(void) {
    int T,X,Y,Z;
    scanf("%d",&T);
    
    for(int i=0;i<T;i++)
    {
        scanf("%d %d %d",&X,&Y,&Z);
        if(Z>=X+Y){
            printf("2\n");
        }
        else if(Z<X+Y && Z>=X){
            printf("1\n");
        }
        else{
            printf("0\n");
        }
    }
	return 0;
}
