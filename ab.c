//greater than or less than
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter the 1st number\n");
	scanf("%d",&a);
	printf("enter the 2nd number\n");
	scanf("%d",&b);
	printf("enter the 3rd number\n");
	scanf("%d",&c);
	if(a>b)
	{
	 if(a>c)
	 printf("a is greater\n");
	 }
	else
	if(b>c)
	printf("b is greater\n");
	else
	printf("c is greater\n");
	
	return 0;
	
}
