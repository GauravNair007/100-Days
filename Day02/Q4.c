#include <stdio.h>

int main(){

//Q4) Write a program to calculate the area and circumference of a circle given its radius.

float Pi, Radius, Area, Circumfrence;

printf("Enter radius=");
scanf("%f", &Radius);

Pi= 3.141592;

Area= Pi*(Radius*Radius);

Circumfrence= 2*Pi*Radius;

printf("Area=%.2f\n", Area);

printf("Circumfrence=%.2f\n", Circumfrence);

return 0;

}