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

int main()
{	int x,y,z;
	input(&x,&y);
	compute(x,y);
	
}
