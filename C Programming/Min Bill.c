#include<stdio.h>
#include<conio.h>

int main()
{
    int Bill=0 , B_Min=0, i=0, B_Cnt=0;


    printf("\n Enter how many bills do you have =");
    scanf("%d",&B_Cnt);

    for(i= 0; i < B_Cnt ; i++)
    {

        printf("\n Enter Bill %d =",i+1);
        scanf("%d",&Bill);

        if((i == 0) || (Bill < B_Min))
        {
            B_Min = Bill;
        }
    }

    printf("\n \n \n Min Bill is = %d",B_Min);

    getch();
    return 0;
}

