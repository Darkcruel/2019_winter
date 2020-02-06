#include<stdio.h>
#include<string.h>

int main()
{
    char TC[15];
    scanf("%s",&TC);
    int result = 0;
    for(int i=0;i<strlen(TC);i++)
    {
        if(TC[i]=='A' || TC[i]=='B' || TC[i]=='C')
        {
            result = result + 3;
        }
        else if(TC[i]=='D'||TC[i]=='E'||TC[i]=='F')
        {
            result = result+4;
        }
        else if(TC[i]=='G'||TC[i]=='H'||TC[i]=='I')
        {
            result = result+5;
        }
        else if(TC[i]=='J'||TC[i]=='K'||TC[i]=='L')
        {
            result = result+6;
        }
        else if(TC[i]=='M'||TC[i]=='N'||TC[i]=='O')
        {
            result = result+7;
        }
        else if(TC[i]=='P'||TC[i]=='Q'||TC[i]=='R'||TC[i]=='S')
        {
            result = result+8;
        }
        else if(TC[i]=='T'||TC[i]=='U'||TC[i]=='V')
        {
            result = result+9;
        }
        else
        {
            result = result+10;
        }   
    }
    printf("%d",result);
    return 0;
}