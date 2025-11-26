 #include <stdio.h>

 int main(){

//Q) Write a program to convert temperature from Celsius to Fahrenheit

float Celsius, Fahrenheit;

printf("Enter Temperature (C)=");
scanf("%f", &Celsius);

Fahrenheit= (Celsius*9/5)+32;

printf("Fahrenheit=%.2f\n", Fahrenheit);

return 0;

 }