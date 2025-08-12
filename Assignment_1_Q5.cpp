#include <stdio.h>

int main() {
    int n, i;
    int arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    int last = arr[n - 1];

    
    for (i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    
    printf("Array after rotation by one:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}