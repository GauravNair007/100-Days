//Q22 Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float cp, sp, percentage;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        percentage = ((sp - cp) / cp) * 100;
        printf("Profit Percentage = %.2f%%\n", percentage);
    }
    else if (cp > sp) {
        percentage = ((cp - sp) / cp) * 100;
        printf("Loss Percentage = %.2f%%\n", percentage);
    }
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}