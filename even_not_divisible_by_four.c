#include <stdio.h>

int main() {
    int n, i = 1, bil = 2;

    printf("Masukkan jumlah bilangan (n): ");
    scanf("%d", &n);

    while (i <= n) {
        if (bil % 2 == 0 && bil % 4 != 0) {
            printf("%d ", bil);
            i++;
        }
        bil++;
    }
    printf("\n");

    return 0;
}