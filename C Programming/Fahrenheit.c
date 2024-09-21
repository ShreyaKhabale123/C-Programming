
#include<stdio.h>
#include<conio.h>

int main()
{
  float Fahrenheit =0 , Celsius=0;

  printf("\n Enter Fahrenheit = ");
  scanf("%f",&Fahrenheit);

  Celsius =(Fahrenheit-32)*5/9;

  printf("\n Celsius = %f",Celsius);

  getch();
  return 0;
}
