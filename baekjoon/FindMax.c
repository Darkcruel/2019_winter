#include<stdio.h>

//baekjoon number 2562 solution

int main()
{
    int index = -1;
    int max = -1;
    for(int i=1;i<10;i++)
    {
        int number;
        scanf("%d",&number);
        if(number>=max)
        {
            max = number;
            index = i;
        }
    }
    printf("%d\n%d",max,index);
    return 0;
}