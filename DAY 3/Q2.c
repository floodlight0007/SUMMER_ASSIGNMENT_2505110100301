#include <stdio.h>

int main()
{
    int start, end, i, j, count;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    for(i = start; i <= end; i++)
    {
        if(i <= 1)
        {
            continue;
        }

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
            printf("%d ", i);
        }
    }

    return 0;
}
