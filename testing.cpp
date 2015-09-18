#include<stdio.h>
#include <math.h>
main()
{
	int i,mask=0b00000000000000000000000000000001;
	int j=31;
	printf("enter any number");
	scanf("%d",&i );
	while(1)
	{
		if(i&(mask<<j ) == mask<<j)
		{
			i = 0xffffffff;
			break;
 		}
		if((i&mask<<(--j))==mask=(mask<<j))
		{
			mask|0xffffffff;
		}
	}
	}
}
