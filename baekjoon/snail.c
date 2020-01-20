#include<stdio.h>

int main()
{
    int A,B,V;
    int sol;
    scanf("%d %d %d",&A,&B,&V);
    if(V-A<=0) 
    {
        sol = 1;
    }
    else //V-A>0
    {
        if((V-A)%(A-B)==0)
        {
            sol = (V-A)/(A-B)+1;
        }
        else
        {
            sol = (V-A)/(A-B)+2;
        }
    }
    printf("%d",sol);
    return 0;
    
}