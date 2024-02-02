#include <stdio.h>

int binarySearch(int a[], int n, int data) {
    int l = 0, r = n - 1, mid;

    while (l <= r) {
        mid = (  l + r) / 2;

        if (a[mid] == data)
            return mid;
        else if (data < a[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }

    return -1;
}

int main() {
    int a[50], n, i, data;

    printf("Enter how many data you want to enter? ");
    scanf("%d", &n);

    printf("Enter the elements for the array in sorted order: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the data you want to search for: ");
    scanf("%d", &data);

    int result = binarySearch(a, n, data);

    if (result != -1) {
        printf("The data is found at index %d\n", result);
    } else {
        printf("The data is not found\n");
    }

    return 0;
}
