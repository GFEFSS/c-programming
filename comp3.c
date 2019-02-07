#include<stdio.h>
int input(int *a,int *b,int *c)
{	
	printf("enter three numbers");
	scanf("%d%d%d",a,b,c);
}
int compute(int a,int b,int c)
{	
	if(a<b&&a<c)
	return a;
	else if (b<a&&b<c)
	return b;
	else
	return c;
}
void output(int h)
{
	printf("the smallest of 3 is%d",h);
}
int main()
{
	int x,y,z,l;
	input(&x,&y,&z);
	l=compute(x,y,z);
	output(l);
}
	
