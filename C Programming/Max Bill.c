
#include<stdio.h>
#include<conio.h>

int main()
{
    int Bill=0 , B_Max=0, i=0, B_Cnt=0;


    printf("\n Enter how many bills do you have =");
    scanf("%d",&B_Cnt);

    for(i=1 ; i<=B_Cnt ; i++)
    {

        printf("\n Enter Bill %d =",i);
        scanf("%d",&Bill);

        if((i == 1) || (Bill > B_Max))
        {
            B_Max = Bill;
        }
    }

    printf("\n \n \n Max Bill is = %d",B_Max);

    getch();
    return 0;
}
