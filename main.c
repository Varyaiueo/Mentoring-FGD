#include <stdio.h>

int main() {
    int baris, kolom, i, j;
    int max, min;

    printf("Ketik Jumlah Baris: ");
    scanf("%d", &baris);

    printf("Ketik Jumlah Kolom: ");
    scanf("%d", &kolom);

    if (baris <= 0 || kolom <= 0) {
        printf("Jumlah baris dan kolom harus lebih dari 0.\n");
        return 1;
    }

    int A[baris][kolom];
    int B[baris][kolom];
    int C[baris][kolom];

    printf("\nMasukkan Elemen Matriks A\n");
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nMasukkan Elemen Matriks B\n");
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nHasil Penjumlahan Matriks C:\n");
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    max = C[0][0];
    min = C[0][0];

    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            if (C[i][j] > max) {
                max = C[i][j];
            }

            if (C[i][j] < min) {
                min = C[i][j];
            }
        }
    }

    printf("\nNilai Maksimum = %d", max);
    printf("\nNilai Minimum = %d\n", min);

    return 0;
}