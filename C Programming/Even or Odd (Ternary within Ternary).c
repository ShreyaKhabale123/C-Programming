#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter a Integer Number =");
    scanf("%d",&No);

    (No == 0) ?  printf("\n Given Number is Neutral") : (No % 2 == 0) ?  printf("\n Given Number is Even") :  printf("\n Given Number is Odd");


    getch ();
    return 0;

}

