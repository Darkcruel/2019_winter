#include<stdio.h>

//baekjoon number 4673 solution

int store[10002];

int main()
{    
    for(int i=0;i<10002;i++)
    {
        store[i] = 1;
    }
    for(int i=1;i<=10000;i++)
    {
        int result = i+(i%10);
        int remain;
        int share = i/10;
        while (share!=0)
        {
            remain = share%10;
            result = result+remain;
            share = share/10;
        }
        store[result]=0;
    }
    for(int i=1;i<10002;i++)
    {
        if(store[i]!=0)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}




