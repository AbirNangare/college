#include <stdio.h>

int main()
{
    int a[100], n, i, j, max, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n - 1; i++)
    {
        max = i;

        for(j = i + 1; j < n; j++)
        {
            if(a[j] > a[max])
                max = j;
        }

        temp = a[i];
        a[i] = a[max];
        a[max] = temp;
    }

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nLargest element = %d", a[0]);
    printf("\nSmallest element = %d", a[n - 1]);

    return 0;
}
