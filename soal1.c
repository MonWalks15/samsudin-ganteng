//Lengkapi Kode program yang rumpang ini serta perbaiki penulisan programnya

#include <stdio.h>

int main() {
    float alas, tinggi, luas;
    
    // Meminta input dari pengguna
    printf("Masukkan alas segitiga: ");
    scanf("%f", &alas);
    
    printf("Masukkan tinggi segitiga: ");
    scanf("%f", &tinggi);
    
    // Menghitung luas segitiga
    luas = 0.5 * alas * tinggi;
    
    // Menampilkan hasil
    printf("Luas segitiga adalah: %.2f\n", luas);
    
    return 0;
}