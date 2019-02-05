#include<stdio.h>
int input(int *a,int *b)
{	printf("enter 2 num");
	scanf("%d%d",a,b);
}
void result(int a,int b)
{	if(a<b)
	printf("%d is smallest",a);
	else
	printf("%d is smallest",b);
}
int main()
{	int x,y;
	input(&x,&y);
	result(x,y);
}
