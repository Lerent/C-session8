#include <stdio.h>

int main() 
{
    int n;
    printf("Hay nhap kich thuoc ma tran vuong: ");
    scanf("%d", &n);
    int list[n][n];
    printf("Hay nhap cac phan tu cua ma tran: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu list[%d][%d]: ", i, j);
            scanf("%d", &list[i][j]);
        }
    }
    printf("Ma tran da nhap la: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", list[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    printf("Cac phan tu tren duong treo chinh la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", list[i][i]);
        sum += list[i][i];
    }
    printf("\nTong cac phan tu tren duong treo chinh la: %d\n", sum);

    return 0;
}

