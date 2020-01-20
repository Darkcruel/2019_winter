#include<stdio.h>

// baekjoon number 1712 sol

int main(int argc, char const *argv[])
{
	/* code */
	int A,B,C;
	int sol;

	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);

	if(B>=C)
	{
		sol = -1;
	}
	else
	{
		sol = A/(C-B)+1;
	}
	
	printf("%d",sol);
	return 0;
}