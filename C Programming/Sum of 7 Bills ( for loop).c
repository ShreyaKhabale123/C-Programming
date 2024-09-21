#include<stdio.h>
#include<conio.h>

int main()
{
    int Bill=0 , B_Sum=0, i=0;

    for(i=1; i<=7; i++)
    {
        printf("\n Enter Bill %d = ",i);
        scanf("%d",&Bill);

        B_Sum = B_Sum + Bill;
    }
    printf("\n Sum of given & Bills = %d",B_Sum);

    getch();
    return 0;
}
