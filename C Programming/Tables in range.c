#include<stdio.h>
#include<conio.h>

int main()
{

    int R=0, C=0, Spt=0, Ept=0;

    printf("\n Enter Values to get Tables = \n");

    printf("\n Enter Staring point =");
    scanf("%d",&Spt);
    printf("\n Enter Ending point =");
    scanf("%d",&Ept);

    if(Spt<Ept)
    {
      for(R=1; R<=10; R++)
       {
         for(C=Spt; C<=Ept; C++)
          {
          printf(" %4d",R*C);
           }
            printf("\n");

       }

    }
    else
    {
        for(R=1; R<=10; R++)
        {
            for(C=Spt; C>=Ept; C--)
             {
               printf(" %4d",R*C);
             }
                printf("\n");

        }

    }
    getch();
    return 0;

}


