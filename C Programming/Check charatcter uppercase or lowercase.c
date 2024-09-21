#include<stdio.h>
#include<stdio.h>

int main()
{

    char ch='\0';

    printf("\n Enter a character to check whether Uppercase or Lowercase = \n");
    scanf("%c",&ch);

    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("\n Given Character is Uppercase Letter");
    }

    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("\n Given Character is Lowercase Letter");
    }

    else
    {
                printf("\n Given Character is Neither Uppercase Nor Lowercase Letter");

    }




}
