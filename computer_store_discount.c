#include <stdio.h>

int main() {
    char loop;
    float total_harga, bayar, diskon;
    int j_ram, j_cpu, j_mb;
    const int h_ram = 380000;
    const int h_cpu = 700000;
    const int h_mb  = 800000;

    do {
        printf("=======================================\n");
        printf("      TOKO KOMPONEN KOMPUTER           \n");
        printf("=======================================\n");
        printf("Masukkan jumlah RAM         : ");
        scanf("%d", &j_ram);
        printf("Masukkan jumlah CPU         : ");
        scanf("%d", &j_cpu);
        printf("Masukkan jumlah Motherboard : ");
        scanf("%d", &j_mb);

        total_harga = (j_ram * h_ram) + (j_cpu * h_cpu) + (j_mb * h_mb);

        if (total_harga > 1500000) {
            diskon = total_harga * 0.10f;
            bayar = total_harga - diskon;
            printf("\nSubtotal      : Rp %.2f\n", total_harga);
            printf("Diskon (10%%)  : Rp %.2f\n", diskon);
            printf("Total Bayar   : Rp %.2f\n", bayar);
        } else {
            diskon = 0.0f;
            bayar = total_harga;
            printf("\nTotal Bayar   : Rp %.2f (Tidak ada diskon)\n", bayar);
        }

        printf("\nApakah ingin menghitung belanja lagi? (y/n): ");
        scanf(" %c", &loop);
        printf("\n");
    } while (loop == 'y' || loop == 'Y');

    printf("Terima kasih telah berbelanja!\n");
    return 0;
}