#include<stdio.h>
#include<conio.h>

int main()
{
 float Radius , Area ;

 printf("\n Enter the Radius of the Circle =");
 scanf("%f",&Radius);

 Area = 3.14 * Radius * Radius;

 printf("\n The Area of Circle is = %f",Area);

 getch ();
 return 0;
}
