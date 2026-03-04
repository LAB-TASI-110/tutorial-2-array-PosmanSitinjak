#include <stdio.h>  // Untuk fungsi input/output seperti scanf dan printf
#include <limits.h> // Untuk INT_MAX dan INT_MIN, nilai batas integer

int main() {
    int n; // Variabel untuk menyimpan jumlah bilangan yang akan dimasukkan

    // Membaca nilai n dari input tanpa prompt
    scanf("%d", &n);

    // Memastikan n adalah bilangan bulat positif
    if (n <= 0) {
        // Jika n tidak positif, program keluar dengan kode error.
        // Tidak ada output teks sesuai permintaan.
        return 1;
    }

    int min_val = INT_MAX; // Inisialisasi nilai minimum dengan nilai integer terbesar
    int max_val = INT_MIN; // Inisialisasi nilai maksimum dengan nilai integer terkecil
    int current_val;       // Variabel untuk menyimpan setiap bilangan yang dimasukkan

    // Loop untuk membaca n bilangan berikutnya tanpa prompt
    for (int i = 0; i < n; i++) {
        // Membaca setiap bilangan dari input
        scanf("%d", &current_val);

        // Memperbarui nilai minimum jika current_val lebih kecil
        if (current_val < min_val) {
            min_val = current_val;
        }
        // Memperbarui nilai maksimum jika current_val lebih besar
        if (current_val > max_val) {
            max_val = current_val;
        }
    }

    // Menampilkan hasil hanya berupa angka sesuai permintaan
    printf("%d\n", min_val);
    printf("%d\n", max_val);

    return 0; // Program berakhir dengan sukses
}
