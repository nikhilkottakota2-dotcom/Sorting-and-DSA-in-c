#include <stdio.h>

int linearsearch(int a[], int n, int key) {
	int i;
    for(i = 0; i < n; i++) {
        if (a[i] == key) {
            return i;  // return index if found
        }
    }
    return -1;  // return -1 if not found
}

int main() {
    int n, key, result;
    int i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = linearsearch(a, n, key);

    if (result == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", result);
    }

    return 0;
}

