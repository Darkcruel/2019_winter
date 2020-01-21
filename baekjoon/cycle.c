#include<stdio.h>

//baekjoon number 1110 solution

int main()
{
    int input;
    scanf("%d",&input);
    int cycle = 1;
    int sum = (input%10)+(input/10);
    int temp = (input%10)*10+(sum%10);
    while(input!=temp)
    {
        sum = (temp%10)+(temp/10);
        temp = (temp%10)*10+(sum%10);
        cycle = cycle+1;
    }
    printf("%d",cycle);
    return 0;
}