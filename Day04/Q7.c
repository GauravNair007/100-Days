#include <stdio.h>

int main(){

//Q) Write a program to swap two numbers without using a third variable

int a, b;

printf("Enter Two numbers=");
scanf("%d %d", &a, &b);



printf("before swapping A=%d B=%d\n", a, b);

a = a + b;
b = a - b;
a = a - b;

printf("After swapping A=%d B=%d", a, b);


    return 0;
}