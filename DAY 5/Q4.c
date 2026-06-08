#include <stdio.h>

int main()
{
    int n, i, j, count;
    int largest = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++)
    {
        if(n % i == 0)
        {
            count = 0;

            for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    count++;
                }
            }

            if(count == 0)
            {
                largest = i;
            }
        }
    }

    printf("Largest Prime Factor = %d", largest);

    return 0;
}
