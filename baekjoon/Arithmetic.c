#include<stdio.h>

//baekjoon number 10869 solution

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int num1,num2,num3,num4,num5;

    num1 = a+b;
    num2 = a-b;
    num3 = a*b;
    num4 = a/b;
    num5 = a%b;

    printf("%d\n",num1);
    printf("%d\n",num2);
    printf("%d\n",num3);
    printf("%d\n",num4);
    printf("%d\n",num5);
    return 0;
}