#include <stdio.h>

int main() {
    int a = 400000;
    int b = 350000;

    int harga_a_diskon = a - (a * 13 / 100);
    int harga_b_diskon = b - (b * 21 / 100);

    printf("Harga sepatu A adalah %d\n", a);
    printf("Harga sepatu B adalah %d\n", b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", harga_a_diskon);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", harga_b_diskon);

    return 0;
}