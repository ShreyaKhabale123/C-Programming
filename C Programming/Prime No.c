
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,No=0,Count=0;

    printf("\n Enter a Number =");
    scanf("%d",&No);

    for (i=1; i<=No; i++)
    {
        if(No%i==0)
        {
            Count++;
        }
    }
    if(Count == 2)
    {
        printf("\n %d is a Prime Number",No);
    }
    else
    {
        printf("\n %d is not a Prime Number",No);
    }
    getch();
    return 0;
}
