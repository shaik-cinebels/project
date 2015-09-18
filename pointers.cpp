#include<stdio.h>
void fun( int );
main()
{
	int n;
	scanf("%d",&n);
	fun(n);
	return 0;
}
 void fun(int n)
{
	static int N=n;
	fun(--N);
	printf("%d",N);
}
//adding this line to test git 
//add some extra lines to check the difference 
//still more
