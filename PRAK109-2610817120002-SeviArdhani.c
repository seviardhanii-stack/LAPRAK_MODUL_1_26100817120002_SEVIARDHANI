#include <stdio.h>

int main() {
    int pasukan_yz = 958730;
    int pahlawan = 5;
    
    int pasukan_per_pahlawan = pasukan_yz / pahlawan;
    
    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", pasukan_yz);
    printf("Jumlah pahlawan = %d\n", pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", pasukan_per_pahlawan);
    
    return 0;
}