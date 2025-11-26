#include <stdio.h>

int main(){

//Q) Write a program to find and display the sum of the first n natural numbers

int n, sum=0;

printf("Number of natural numbers n=");

scanf("%d", &n);

sum = (n * (n + 1)) / 2;

printf("SUM=%d", sum);


return 0;

}