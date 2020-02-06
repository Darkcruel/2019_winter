#include<stdio.h>

//baekjoon number 2908 solution

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    x = (x%10)*100 + (x/10 - ((x/100)*10)) * 10 + (x/100);
    y = (y%10)*100 + (y/10 - ((y/100)*10)) * 10 + (y/100);
    if(x>y)
    {
        printf("%d\n",x);
    }
    else
    {
        printf("%d\n",y);
    }
    return 0;
}