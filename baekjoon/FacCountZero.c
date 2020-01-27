#include<stdio.h>

//baekjoon number 1676 solution

int main()
{
    int input;
    scanf("%d",&input);
    int count_two = 0;
    int count_five  = 0;
    while(input>0)
    {
        int save = input;
        while(save%2==0)
        {
            count_two = count_two+1;
            save = save/2;
        }
        while(save%5==0)
        {
            count_five =count_five+1;
            save = save/5;
        }   
        input = input-1;
    }
    

    if(count_two<=count_five)
    {
        printf("%d",count_two);
    }
    else
    {
        printf("%d",count_five);
    }
    return 0;
    
}