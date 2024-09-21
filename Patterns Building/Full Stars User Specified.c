
#include<stdio.h>
#include<conio.h>

int main()
{
    int R=0,C=0 , Row=0, Col=0;

    printf("\n Enter Row Count =");
    scanf("%d",&Row);

    printf("\n Enter Column Count =");
    scanf("%d",&Col);

    for(R=1;R<=Row;R++)
    {
        for(C=1;C<=Col;C++)
        {
          printf(" * ");

        }
          printf("\n");

    }
    getch();
    return 0;
}


