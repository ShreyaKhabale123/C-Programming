#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0,dcnt=0,Temp=0;
    printf("\n Enter a Number=");
    scanf("%d",&No);
    Temp=No;
    while(Temp>0)
    {
        Temp=Temp/10;
        dcnt++;
    }
    printf("\n Count Of Digits in %d=%d",No,dcnt);
    getch();
    return 0;
}










