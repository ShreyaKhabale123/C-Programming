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
        if(Dig==0)
        {
            zCnt++;
        }
        Temp = Temp/10;
    }
    printf("\n Zeros count in given number %d =%d.",No,zCnt);

    _getch();
    return 0;
}
