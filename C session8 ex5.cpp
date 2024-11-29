#include <stdio.h>

int main() 
{
    int arr[4][5] = {
        {1, 3, 8, 12, 5},
        {6, 7, 8, 9, 7},
        {34, 12, 9, 14, 15},
        {16, 22, 21, 19, 25}
    };
    printf("Ma tran 2 chieu:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for (int j = 0; j < 5; j++) {
        sum += arr[0][j];
    }
    for (int j = 0; j < 5; j++) {
        sum += arr[3][j];
    }
    for (int i = 1; i < 3; i++) { 
        sum += arr[i][0];
    }
    for (int i = 1; i < 3; i++) {
        sum += arr[i][4];
    }
    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);

    return 0;
}

