#include<stdio.h>
#include<conio.h>

int main()
{
    int  No=0,i=0;
    printf("\n Table of is =",No);
    scanf("%d",&No);

    for(i=1; i<=10;i++)
    {
        printf("\n %3d * %3d =%3d",No,i,(i*No));
    }
    getch();
    return 0;
}

