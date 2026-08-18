#include <stdio.h>

int main() {
    int arr[100], n, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if ((arr[i] & 1) == 0)
            count++;
    }

    printf("Numbers divisible by 2 = %d\n", count);

    return 0;
}
