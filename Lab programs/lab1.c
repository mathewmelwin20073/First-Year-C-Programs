// Progrma to conver temperature from Farenehit to Celsius
#include <stdio.h>
void main()
{
  float f, c=0;
printf("Enter the temperature in farenheit\n");
scanf("%f",&f);
c= (f-32)*5/9;
printf("The temperature in celsius is:%f",c);
}


