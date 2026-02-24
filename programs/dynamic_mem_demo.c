#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    /* malloc example */
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    /* realloc example */
    printf("\nResizing array to %d elements...\n", n + 2);
    arr = (int *)realloc(arr, (n + 2) * sizeof(int));

    /* free memory */
    free(arr);
    arr = NULL;   // Avoid dangling pointer

    printf("\nMemory freed successfully.\n");

    return 0;
}
