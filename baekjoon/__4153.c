#include<stdio.h>

//baekjoon number 4153 solution

int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    while(1)
    {
        if(A==0 && B==0 && C==0)
        {
            break;
        }
        else if(A==0 || B==0 || C==0)
        {
            printf("%s\n","wrong");
        }
        else
        {
            if(A*A+B*B==C*C||B*B+C*C==A*A||C*C+A*A==B*B)
            {
                printf("%s\n","right");
            }
            else
            {
                printf("%s\n","wrong");
            }
        }
        scanf("%d %d %d",&A,&B,&C);
    }
    return 0;
}