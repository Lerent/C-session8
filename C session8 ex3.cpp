#include <stdio.h>

int main() 
{
    int n;
    printf("Hay nhap mot so nguyen: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("So nguyen phai la so duong\n");
        return 1;
    }
    int list[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            list[i][j] = (i + 1) * (j + 1);
        }
    }
    printf("Ma tran vuong %d x %d: \n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", list[i][j]);
        }
        printf("\n");
    }

    return 0;
}

