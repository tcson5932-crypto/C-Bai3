#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);

    printf("Tong = %d\n", a + b);
    printf("Hieu = %d\n", a - b);
    printf("Tich = %d\n", a * b);

    if (b != 0) {
        printf("Thuong = %d\n", a / b);
        printf("Phan du = %d\n", a % b);
    } else {
        printf("Khong the chia cho 0\n");
    }

    return 0;
}

