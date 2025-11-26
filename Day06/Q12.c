#include <stdio.h>

int main(){

//Q) Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

int inte;

printf("Enter integer=");
scanf("%d", &inte);

if (inte >=0)
{
    if (inte ==0)
    {
       printf("The number is zero"); 
    } else {
        printf("the number is Positive");
    } 
    
}
    else {
        printf("the number is Negative");
    }


    return 0;
}