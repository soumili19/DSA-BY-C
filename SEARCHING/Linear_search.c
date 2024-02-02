#include <stdio.h>

int main() {
    int a[50], n, i, data;

    printf("Enter how many data you want to enter? ");
    scanf("%d", &n);

    printf("Enter the elements for the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the data you want to search for: ");
    scanf("%d", &data);

    for (i = 0; i < n; i++) {
        if (a[i] == data) {
            printf("The data is found at index %d\n", i);
            break;
        }
    }

    if (i == n) {
        printf("The data is not found\n");
    }

    return 0;
}
