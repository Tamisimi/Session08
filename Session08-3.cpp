#include <stdio.h>

int main() {
    int n;

    printf("Nhap mot so nguyen ");
    scanf("%d", &n);
    
    int array[n][n];

    printf("Nhap cac phan tu cho ma tran %d x %d: \n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("array[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("Ma tran %d x %d la: \n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
