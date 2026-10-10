#include <stdio.h>

int main() {
    float putaran = 5;
    float jarak = 14;
    float pi = 3.14;
    
    float keliling = jarak / putaran;
    float r = keliling / (2 * pi);
    
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n\n", jarak);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", r);
    
    return 0;
}