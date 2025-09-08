#include <stdio.h>

int main() {
    int size, i;
    printf("enter the size of the table : ");
    scanf("%d", &size);

    int table[size];
    for (i = 0; i < size; i++) {
        printf("enter element %d : ", i + 1);
        scanf("%d", &table[i]);
    }

    int temp;
    for (i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (table[j] > table[j + 1]) {
                temp = table[j];
                table[j] = table[j + 1];
                table[j + 1] = temp;
            }
        }
    }

    printf("order croissant :\n");
    for (i = 0; i < size; i++) {
        printf("%d ", table[i]);
    }
    printf("\n");

    return 0;
}
