#include <stdio.h>

int main() 
{
    int list[6] = {5, 12, 7, 3, 9, 15};
    int n = sizeof(list) / sizeof(list[0]);
    int Timphantu, score = 0;
    printf("Hay nhap phan tu can tim: ");
    scanf("%d", &Timphantu);
    for (int i = 0; i < n; i++) {
        if (list[i] == Timphantu) {
            printf("VI tri phan tu o trong mang la: %d\n", i + 1);
            score = 1;
            break;
        }
    }
    if (!score) {
        printf("Phan tu khong ton tai trong mang\n");
    }

    return 0;
}


