#include<stdio.h>
int input(int *a,int *b)
{	printf("enter 2 num");
	scanf("%d%d",a,b);
	return 0;
}
void result(int a,int b,int *result)
{	*result=a+b;
}
int main()
{	int x,y,z;
	input(&x,&y);
	result(x,y,&z);
	printf("%d+%d=%d",x,y,z);
}
