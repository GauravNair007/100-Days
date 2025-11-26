#include <stdio.h>

int main(){

//Q) Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

int Length, Breadth, Area, Perimeter;

printf("Enter Lenght and Breadth:");

scanf("%d %d", &Length, &Breadth);

Area= Length*Breadth;

Perimeter= 2*(Length+Breadth);

printf("Area=%d\n", Area);
printf("Perimeter=%d\n", Perimeter);

return 0;

} 