#include <stdio.h>

int main() 
{
    int n;
    printf("Hay nhap so phan tu trong mang: ");
    scanf("%d", &n);
    int list[n];
    printf("Hay nhap cac phan tu cua mang: \n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d la: ", i + 1);
        scanf("%d", &list[i]);
    }
    printf("Mang in tu cuoi den dau la: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", list[i]);
    }

    return 0;
}

