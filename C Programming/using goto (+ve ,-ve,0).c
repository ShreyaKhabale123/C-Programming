
#include<stdio.h>
#include<conio.h>

int main()
{

    int No =0;
    Up:
         printf("\n Enter a Number to check whether a number is Positive or Negative =");
         scanf("%d",&No);

         if (No == 0)
          {
             printf("\n You have entered a Zero which is Neutral");
             printf("\ Please Enter a Valid Number");
             goto Up;
          }

          if(No > 0)
          {

              printf("\ You have entered a Positive number");
          }
          else
          {
              printf("\n You have entered a Negative number");
          }

          _getch();
          return 0;
}
