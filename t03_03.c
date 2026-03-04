#include <stdio.h>  // Untuk fungsi input/output seperti scanf dan printf
#include <limits.h> // Untuk INT_MAX dan INT_MIN, nilai batas integer
#include <float.h>  // Untuk DBL_MAX dan DBL_MIN, nilai batas double

int main() {
    int n; // Variabel untuk menyimpan jumlah bilangan yang akan dimasukkan

    // Membaca nilai n dari input tanpa prompt
    scanf("%d", &n);

    // Memastikan n adalah bilangan bulat positif
    if (n <= 0) {
        // Karena output hanya angka, kita bisa keluar atau menampilkan pesan error singkat
        // Namun, sesuai instruksi 'hapus semua outputnya dan cuma angkanya saja',
        // untuk kasus error ini, kita tetap berpegang pada itu.
        // Jika perlu penanganan error khusus, mohon informasikan.
        return 1; // Keluar dari program dengan kode error
    }

    int min_val = INT_MAX; // Inisialisasi nilai minimum dengan nilai integer terbesar
    int max_val = INT_MIN; // Inisialisasi nilai maksimum dengan nilai integer terkecil
    int current_val;       // Variabel untuk menyimpan setiap bilangan yang dimasukkan
    int prev_val = 0;      // Variabel untuk menyimpan nilai sebelumnya, diinisialisasi untuk menghindari warning
    
    double min_avg_consecutive = DBL_MAX; // Inisialisasi nilai rata-rata minimum dengan nilai double terbesar
    double max_avg_consecutive = DBL_MIN; // Inisialisasi nilai rata-rata maksimum dengan nilai double terkecil

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

        // Jika ini bukan bilangan pertama, hitung rata-rata dengan bilangan sebelumnya
        if (i > 0) {
            double current_avg = (double)(prev_val + current_val) / 2.0;
            
            // Memperbarui nilai rata-rata minimum jika current_avg lebih kecil
            if (current_avg < min_avg_consecutive) {
                min_avg_consecutive = current_avg;
            }
            // Memperbarui nilai rata-rata maksimum jika current_avg lebih besar
            if (current_avg > max_avg_consecutive) {
                max_avg_consecutive = current_avg;
            }
        }
        
        // Simpan current_val sebagai prev_val untuk iterasi berikutnya
        prev_val = current_val;
    }

    // Menampilkan hasil hanya berupa angka sesuai permintaan
    printf("%d\n", min_val);
    printf("%d\n", max_val);

    if (n > 1) {
        printf("%.2f\n", min_avg_consecutive);
        printf("%.2f\n", max_avg_consecutive);
    } 
    // Jika n <= 1, tidak ada pasangan berturut, maka output rata-rata tidak ditampilkan.
    // Sesuai contoh output Anda, tidak ada baris kosong atau indikasi error untuk kasus ini.

    return 0; // Program berakhir dengan sukses
}
