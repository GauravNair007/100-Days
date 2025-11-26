#include <stdio.h>

int main(){

/*
Q) Write a program to input two numbers and display their 
sum, difference,product, and quotient.
*/

float num1, num2, sum, difference, product, quotient;

printf("Enter Two Numbers:");

scanf("%f %f", &num1, &num2);

sum= num1+num2;

difference= num1-num2;

product= num1*num2;

quotient= num1/num2;


printf("SUM=%.2f\n", sum);
printf("Difference=%.2f\n", difference);
printf("Product=%.2f\n", product);
printf("Quotient=%.2f\n", quotient);


return 0;

}