#include<stdio.h>
#include<conio.h>

int main()
{
    int R=0,C=0,Cnt=0;

    printf("\n Enter Row and Column Count =");
    scanf("%d",&Cnt);

    for(R=1;R<=Cnt;R++)
    {
        for(C=1;C<=Cnt;C++)
        {
            if(R==1 || C ==1 || R == Cnt || (R == (Cnt/2)+1) && (C == (Cnt/2)+1))
            {
                printf(" * ");

            }
            else
            {
                printf("   ");

            }
        }
                printf("\n");
    }
    getch();
    return 0;
}


