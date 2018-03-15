#include <stdio.h>

void main()
{
	int a,b,c,d,gcd,i,minimum;
	printf("\nEnter the two numbers : ");
	scanf("%d",&a);
	scanf("%d",&b);
	minimum=(a<b)?a:b;
    for(i=1;i<=minimum;i++)
	{
	    c=a%i;
	    d=b%i;
	if(c==0&&d==0)
	    { 
		  gcd=i;
	
	    }
	}
	printf("\nThe GCD value for given numbers is: %d",gcd);
	
}
