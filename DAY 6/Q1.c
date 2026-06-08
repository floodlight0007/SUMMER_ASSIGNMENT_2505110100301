#include <stdio.h>

int main()
{
    int n, binary = 0, place = 1, remainder;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        remainder = n % 2;
        binary = binary + (remainder * place);

        place = place * 10;
        n = n / 2;
    }

    printf("Binary number = %d", binary);

    return 0;
}
