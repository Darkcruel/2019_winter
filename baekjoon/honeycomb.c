#include<stdio.h>

// baekjoon number 2292 sol

int main()
{
   int input;
   int level = 1;
   int step = 1;

   scanf("%d",&input);
   while(1)
   {
      if(input<=step)
      {
         break;
      }
      step = step + 6 * level;
      level = level+1;
   }
   printf("%d",level);
   
   return 0;
}
