#include <stdio.h>  // Untuk fungsi input/output seperti scanf dan printf
#include <limits.h> // Untuk INT_MAX dan INT_MIN, nilai batas integer

int main() {
    int n; // Variabel untuk menyimpan jumlah bilangan yang akan dimasukkan

    // Meminta pengguna memasukkan nilai n
    printf("Masukkan jumlah bilangan yang akan dianalisis (n): ");
    // Membaca nilai n dari input
    scanf("%d", &n);

    // Memastikan n adalah bilangan bulat positif
    if (n <= 0) {
        printf("Jumlah bilangan (n) harus merupakan bilangan bulat positif.\n");
        return 1; // Keluar dari program dengan kode error
    }

    int min_val = INT_MAX; // Inisialisasi nilai minimum dengan nilai integer terbesar
    int max_val = INT_MIN; // Inisialisasi nilai maksimum dengan nilai integer terkecil
    int current_val;       // Variabel untuk menyimpan setiap bilangan yang dimasukkan

    printf("Masukkan %d bilangan bulat, masing-masing antara -100 dan 100:\n", n);

    // Loop untuk membaca n bilangan berikutnya
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

    // Menampilkan hasil sesuai permintaan
    // Asumsi "3 baris keluaran yang isinya sebaris menampilkan nilai terkecil... sebaris keluaran menampilkan nilai terbersar..."
    // berarti dua baris yang berisi nilai minimum dan maksimum, pada baris terpisah.
    // Jika ada interpretasi lain untuk baris ketiga, mohon beritahu.
    printf("\nNilai terkecil yang dimasukkan: %d\n", min_val);
    printf("Nilai terbesar yang dimasukkan: %d\n", max_val);

    return 0; // Program berakhir dengan sukses
}
