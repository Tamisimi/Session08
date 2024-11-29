#include <stdio.h>

int main() {
    int array[4][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15, 16}};
    int sum = 0;
    int n = 4;
    printf("Cac phan tu tren duong cheo chinh cua ma tran la \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i][i]);
        sum += array[i][i];
    }
    printf("\nTong cac phan tu tren duong cheo chinh la %d\n", sum);
    return 0;
}

