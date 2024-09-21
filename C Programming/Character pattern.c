#include<stdio.h>
#include<conio.h>

int main()
{
    int R=0,C=0,Cnt=0;
    char ch='\0';

    printf("\n Enter Row and Column Count =");
    scanf("%d",&Cnt);

    printf("\n ***** Patterns *****\n\n");

    for(ch='A', R=1;R<=Cnt;R++)
    {

        for(C=1;C <=Cnt;C++,ch++)
        {
            if(R>=C)
            {
                printf("%c",ch);
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
