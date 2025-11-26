#include <stdio.h>

int main(){

//Q) Write a program to input time in seconds and convert it to hours:minutes:seconds format

int sec, min, hr, Tsec;


printf("Enter time (sec)=");
scanf("%d", &Tsec);

hr= Tsec/3600;

min= (Tsec % 3600)/60;

sec= Tsec % 60;

printf("%d:%d:%d", hr, min, sec);



    return 0;
}