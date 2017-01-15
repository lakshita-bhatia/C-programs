#include <stdio.h>

int main(void) 
{
	int k,j,*l=NULL,i;
	unsigned int*s=NULL,t;
	scanf("%u",&t);
	for(i=0;i<t;i++)
	{
		scanf("%u",&k);
		*(s+i)=k;
		for (j=1;j<=*(s+i) && k>0;j++)
		{
			
			k-=j*j;
		}
		*(l+i)=--j;
	}
	for(i=0;i<t;i++)
	{
			printf("%u",*(l+i));
		
	}
	
	return 0;
}

