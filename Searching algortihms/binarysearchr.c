#include <stdio.h>

int binarysearchr(int a[], int l, int h, int key) {
    if (l > h) {
        return -1; // not found
    }
    int mid = (l + h) / 2;
    if (a[mid] == key) {
        return mid;
    }
    if (key < a[mid]) {
        return binarysearchr(a, l, mid - 1, key);
    } else {
        return binarysearchr(a, mid + 1, h, key);
    }
}

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the array elements (sorted): ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int key;
    printf("Enter key element: ");
    scanf("%d", &key);

    int result = binarysearchr(a, 0, n - 1, key);

    if (result == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", result);
    }

    return 0;
}

