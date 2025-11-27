//Q40 Write a program to find the 1’s complement of a binary number and print it.

int main() {
    long long bin, complement = 0;
    int digit, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &bin);

    long long temp = bin;

    while (temp != 0) {
        digit = temp % 10;

        if (digit == 0)
            complement += 1 * place;
        else
            complement += 0 * place;
        place *= 10;
        temp /= 10;
    }

    printf("1's Complement = %lld\n", complement);

    return 0;
}