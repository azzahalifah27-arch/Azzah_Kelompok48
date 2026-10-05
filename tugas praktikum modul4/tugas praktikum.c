#include <iostream>

using namespace std;

// Function biasa untuk menentukan status kelulusan (Pengkondisian)

void cekKelulusan(double rataRata) {

    if (rataRata >= 75) {

        cout << "Status     : LULUS\n";

    } else {

        cout << "Status     : TIDAK LULUS\n";

    }

}



// Class Siswa yang memiliki Method

class Siswa {

private:

    double totalNilai = 0;



public:

    // Method untuk menambah nilai ujian

    void tambahNilai(double nilai) {

        totalNilai += nilai;

    }



    // Method untuk menghitung nilai rata-rata

    double hitungRataRata(int jumlahUjian) {

        return totalNilai / jumlahUjian;

    }

};



int main() {

    cout << ”Made by kelompok 48 :)” << endl;

    cout << ”======================” << endl;

    Siswa s;

    int jumlahUjian;



    cout << "=== PROGRAM HITUNG RATA-RATA NILAI ===\n";

    cout << "Masukkan jumlah ujian: ";

    cin >> jumlahUjian;



    // Perulangan untuk menginput nilai-nilai ujian

    for (int i = 1; i <= jumlahUjian; i++) {

        double nilai;

        cout << "Masukkan nilai ujian ke-" << i << ": ";

        cin >> nilai;



        // Memanggil Method class

        s.tambahNilai(nilai);

    }



    // Memanggil Method untuk hitung rata-rata

    double rataRata = s.hitungRataRata(jumlahUjian);



    cout << "\n-------------------------------------\n";

    cout << "Rata-rata  : " << rataRata << "\n";



    // Memanggil Function terpisah untuk cek kelulusan

    cekKelulusan(rataRata);



    return 0;

}
