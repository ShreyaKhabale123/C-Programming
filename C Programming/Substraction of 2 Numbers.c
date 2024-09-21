#include<stdio.h>
#include<conio.h>

int main()
{
    int N1=0 , N2=0 ,Sub=0;

    printf("\n Enter 1st Number =");
    scanf("%d",&N1);

    printf("\n Enter 2nd Number =");
    scanf("%d",&N2);

    Sub= N1 - N2;
    printf("\n Substraction of Two Numbers= %d",Sub);

    getch();
    return 0;
}
