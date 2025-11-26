#include <stdio.h>

int main(){

//Q) Write a program to input an integer and check whether it is even or odd using if–else

int num1;

printf("Enter a number=");
scanf("%d", &num1);


if (num1 % 2 ==0 )
{
    printf("%d is an even number", num1);
} 

else {

    printf("%d is an odd number", num1);
}


    return 0;
}