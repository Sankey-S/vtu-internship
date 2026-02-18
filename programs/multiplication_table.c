#include <stdio.h>

#define ROWS 12
#define COLUMNS 12

int main() {

    int product[ROWS][COLUMNS];

    printf("MULTIPLICATION TABLE\n\n");

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            product[i][j] = (i + 1) * (j + 1);
            printf("%4d", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
