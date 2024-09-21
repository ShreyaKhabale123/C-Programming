#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0 ,Rev=0 ,Rem=0,Temp;

    printf("\n Enter a number =");
    scanf("%d",&No);

    Temp=No;

    while(Temp>0)
    {
        Rem=Temp%10;
        Rev=Rev * 10 + Rem;
        Temp/=10;

    }
    if(No==Rev)
    {
        printf("\n Number is Palindrome");
    }
    else
    {
        printf("\n Number is not Palindrome");
    }
}

