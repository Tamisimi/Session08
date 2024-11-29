#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int n = sizeof(array) / sizeof(array[0]);
    int x;
	printf("Nhap mot phan tu ");
	scanf("%d", &x);
	 for (int i = 0; i < n; i++) {
        if (array[i] == x) {
            printf("Vi tri phan tu trong mang la %d\n", i);
            break;
        } else {
        	printf("Phan tu khong ton tai trong mang \n");
        	break; 
		} 
	}
    return 0;
}
