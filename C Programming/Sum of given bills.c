#include<stdio.h>
#include<conio.h>

int main()
{
    int Bill=0 , B_Sum=0, i=0, B_Cnt=0;


    printf("\n Enter how many bills do you have =");
    scanf("%d",&B_Cnt);

    for(i=1 ; i<=B_Cnt ; i++)
    {

        printf("\n Enter Bill %d =",i);
        scanf("%d",&Bill);

        B_Sum = B_Sum + Bill;
    }

    printf("\n Sum of given %d Bills =%d",B_Cnt,B_Sum);

    getch ();
    return 0;
}


