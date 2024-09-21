#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,zCnt=0,Dig=0,Temp=0;
    printf("\n Enter Number =");
    scanf("%d",&No);

    Temp=No;

    while(Temp>0)
    {
        Dig = Temp % 10;
        if(Dig==7)
        {
            zCnt++;
        }
        Temp = Temp/10;
    }
    printf("\n Seven count in given number %d =%d.",No,zCnt);

    getch();
    return 0;
}

