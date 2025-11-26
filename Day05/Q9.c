#include <stdio.h>

int main(){

//Q) Write a program to calculate simple and compound interest for given principal, rate, and time.
 

float principal, rate, time, si, ci,A,i;


printf("Enter Principal=");
scanf("%f", &principal);

printf("Enter rate=");
scanf("%f", &rate);

printf("Enter time=");
scanf("%f", &time);


si= (principal*rate*time)/100;

A=principal;

for ( i = 0; i < time; i++)
{

    A=A*(1+rate/100);

}


ci= A-principal;

printf("Simple intrest=%.2f\n", si);

printf("Compound interest+=%.2f\n", ci);



    return 0;
}