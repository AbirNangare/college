#include <stdio.h>

int main() {
    int arr[100], n, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = arr[0];

    for (int i = 1; i < n; i++) {
        int diff = arr[i] - max;

        if ((diff >> 31) == 0 && diff != 0)
            max = arr[i];
    }

    printf("Maximum number = %d\n", max);

    return 0;
}
