
#include<stdio.h>
#include<conio.h>

int main()
{
    int Bill=0 , B_Sum=0;

    printf("\n Enter 1st Bill =");
    scanf("%d",&Bill);
    B_Sum = B_Sum + Bill;


    printf("\n Enter 2nd Bill =");
    scanf("%d",&Bill);
    B_Sum = B_Sum + Bill;


    printf("\n Enter 3rd Bill =");
    scanf("%d",&Bill);
    B_Sum = B_Sum + Bill;

    printf("\n Enter 4th Bill =");
    scanf("%d",&Bill);
    B_Sum = B_Sum + Bill;


    printf("\n Enter 5th Bill =");
    scanf("%d",&Bill);
    B_Sum = B_Sum + Bill;

    printf("\n Sum of given five bills = %d",B_Sum);

    getch();
    return 0;
}
