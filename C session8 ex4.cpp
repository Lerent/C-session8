#include <stdio.h>

int main ()
{
	int a, b;
	printf("Hay nhap so hang a: ");
	scanf("%d", &a);
	printf("Hay nhap so cot b: ");
	scanf("%d", &b);
	int list[a][b];
	printf("Hay nhap cac phan tu cua mang:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("Nhap cac phan tu list[%d][%d]: ", i, j);
            scanf("%d", &list[i][j]);
        }
    }
    int max = list[0][0];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (list[i][j] > max) {
                max = list[i][j];
            }
        }
    }
    printf("Phan tu lon nhat trong mang la: %d", max);
    
    return 0;
}
