
#include<stdio.h>
#include<conio.h>

int main()
{
    int R= 0,C= 0,Cnt= 0;

    printf("\n Enter Row and Column Count : ");
    sacnf("%d",&Cnt);

    for(R=1;R<=Cnt;R++)
    {
        for(C=1;C<=Cnt;C++)
        {
            if((R == C) || (R+C)==(Cnt + 1))
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
