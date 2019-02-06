#include<stdio.h>
int input(int *a,int *b)
{	printf("enter two num");
	scanf("%d%d",a,b);
}
int compute(int a ,int b)
{	
	if(a<b)
	return a;
	else 
	return b;
}
void output(int h)
{	printf("smallest num is %d",h);
}
int main()
{	int x,y,z;
	input(&x,&y);
	z=compute(x,y);
	output(z);	
}
