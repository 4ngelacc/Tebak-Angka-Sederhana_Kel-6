#include <iostream>
#include <cstdlib>  // Lib. rand dan srand
#include <ctime>    // Lib. time	

using namespace std;

int main() {
    srand(time(0));

    int angka = rand() % 100 + 1; // Angka acak antara 1 dan 100
    int tebakan;
    int jumlah_tebakan = 0;
    const int MAX_TEBAKAN = 6;  

    cout << "Selamat Datang di Game Tebak Angka!!" << endl;
    cout << "Pilihlah angka dari 1 sampai 100." << endl;
    cout << "Coba tebak angka tersebut dengan 6 kesempatan!!" << endl;
    cout << "Kita lihat apakah kamu bisa menebak dengan jumlah tebakan yang sedikit." << endl;
    cout << "Good Luck Brow!!" << endl;
    
    do {
        cout << "Masukkan tebakanmu: ";
        cin >> tebakan;  // Masukkan angka untuk menebak
        jumlah_tebakan++;

        if (tebakan < angka) {
            cout << "Tebakanmu terlalu rendah. Coba lagi!" << endl;
        } else if (tebakan > angka) {
            cout << "Tebakanmu terlalu tinggi. Coba lagi!" << endl;
        } else {
            cout << "Congrats Brow! GG Banget Tebakanmu Benar " << angka
                 << " dengan benar setelah " << jumlah_tebakan << " tebakan." << endl;
            break;  // Keluar dari permainan jika tebakan benar
        }

        
        if (jumlah_tebakan >= MAX_TEBAKAN) {
            cout << "Hey Loser!!" << endl;
			cout << "Kesempatanmu menebak habis (" << MAX_TEBAKAN << " tebakan). Permainan selesai\n"<< "Kamu Gagal "<< endl;
            break;  // Keluar dari permainan jika tebakan mencapai maksimum
        }

    } while (tebakan != angka);  

    return 0;
}

