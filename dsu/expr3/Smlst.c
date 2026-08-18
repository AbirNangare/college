#include <stdio.h>

int main() {
    int arr[100], n, smallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Smallest element = %d\n", smallest);

    return 0;
}
