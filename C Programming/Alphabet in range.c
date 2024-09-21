#include<stdio.h>
#include<stdio.h>

int main()
{

    char Spt='\0', Ept='\0';

    printf("\n Enter Staring Character =");
    scanf("%c",&Spt);
    printf("\n Enter Ending Character =");
    scanf("%c",&Ept);
    printf("\n Given Letters from %c to %c =",Spt,Ept);

    if(Spt=Ept)
    {
        while(Spt<=Ept)
        {
            printf("\n%c",Spt);
            Spt++;

        }
    }

    else
    {
        while(Spt>=Ept)
        {
            printf("\n%c",Spt);
            Spt--;

        }
    }
    getch();
    return 0;

}
