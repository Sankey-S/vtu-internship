#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return x - y;
}

int main() {

    int list[] = {103, 549, 22, 699, 1029, 9, 45, 653, 22, 541, 990, 149, 269, 399};
    int n = sizeof(list) / sizeof(list[0]);

    printf("Unsorted List:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", list[i]);

    qsort(list, n, sizeof(int), compare);

    printf("\n\nSorted List:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", list[i]);

    return 0;
}
