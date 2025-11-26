#include <stdio.h>

int main(){

//Q) Write a program to input two numbers and display their sum

int num1, num2, sum;

 
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

   
    sum = num1 + num2;


    printf("Sum = %d\n", sum);

    return 0;


}