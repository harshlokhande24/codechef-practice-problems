#include <stdio.h>

int main(void) {
	int T,X,Y,Z,temp,mean;
	scanf("%d",&T);
	
	for(int i=0;i<T;i++)
	{
	    scanf("%d %d",&X,&Y);
	    mean=(X+Y)/2;
	    if(X>Y)
	    {
	        temp=X;
	    }
	    else
	    {
	        temp=Y;
	    }
	    Z=temp-mean;
	    printf("%d\n",Z);
	}
	return 0;
}
