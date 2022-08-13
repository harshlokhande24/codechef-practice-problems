#include <stdio.h>

int main(void) {
	int T,X,Y,total;
	scanf("%d",&T);
	
	for(int i=0;i<T;i++)
	{
	    scanf("%d",&X);
	    if(0<=X && X<=100)
	    {
            Y=0;   
	    }
	    else if(100<X && X<=1000)
	    {
	        Y=25;
	    }
	    else if(1000<X && X<=5000)
	    {
	        Y=100;
	    }
	    else if(X>5000)
	    {
	        Y=500;
	    }
	    
	    total=X-Y;
	    printf("%d\n",total);
	}
	return 0;
}
