#include <stdio.h>

int main() {
    int tahun;

    do {
        printf("Masukkan Tahun (1900 - 2020): ");
        scanf("%d", &tahun);

        if (tahun < 1900 || tahun > 2020) {
            printf("Tahun invalid! Harap masukkan antara 1900 sampai 2020.\n");
        }
    } while (tahun < 1900 || tahun > 2020);

    // Aturan tahun kabisat sederhana (kelipatan 4)
    if (tahun % 4 == 0) {
        printf("%d adalah tahun kabisat.\n", tahun);
    } else {
        printf("%d bukan tahun kabisat.\n", tahun);
    }

    return 0;
}