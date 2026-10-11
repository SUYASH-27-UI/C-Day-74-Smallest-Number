#include <stdio.h>

int main()
{
    int n, number, smallest;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (i == 1 || number < smallest)
        {
            smallest = number;
        }
    }

    printf("Smallest number = %d", smallest);

    return 0;
}
