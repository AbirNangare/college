#include <stdio.h>

int main() {
    int n, key, i, low, high, mid, found = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in descending order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            found = mid;
            break;
        } else if (arr[mid] < key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (found == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", found);
    }

    return 0;
}
