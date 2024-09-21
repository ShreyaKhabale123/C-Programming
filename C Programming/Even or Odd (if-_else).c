#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter a Integer Number =");
    scanf("%d",&No);

    if(No == 0)
    {

        printf("\n Given Number is Neutral");
    }
    else if (No % 2 == 0)
    {
        printf("\n Given Number is Even");

    }
    else
    {
        printf("\n Given Number is Odd");

    }

    getch();
    return 0;

}
