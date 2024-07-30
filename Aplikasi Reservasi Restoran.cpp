#include <iostream>
#include <string>
#include <vector>
#include <cstring> // untuk strcmp

using namespace std;

// Definisi struct untuk menyimpan data reservasi
struct Reservasi {
    string nama;
    int jumlahOrang;
    string tanggal;
    string waktu;
};
// Fungsi validasi ketersediaan meja
bool validasiMeja(vector<Reservasi>& reservasi, const string& tanggal, const string& waktu) {
    for(const auto& res : reservasi) {
        if(res.tanggal == tanggal && res.waktu == waktu) {
            return false; // Meja sudah dipesan pada waktu tersebut
        }
    }
    return true; // Meja tersedia
}
// Fungsi untuk menambah reservasi
void tambahReservasi(vector<Reservasi>& reservasi) {
    Reservasi newReservasi;
    cout << "Masukkan nama: ";
    cin >> newReservasi.nama;
    cout << "Masukkan jumlah orang: ";
    cin >> newReservasi.jumlahOrang;
    cout << "Masukkan tanggal (DD-MM-YYYY): ";
    cin >> newReservasi.tanggal;
    cout << "Masukkan waktu (HH:MM): ";
    cin >> newReservasi.waktu;
    
    if(validasiMeja(reservasi, newReservasi.tanggal, newReservasi.waktu)) {
        reservasi.push_back(newReservasi);
        cout << "Reservasi berhasil ditambahkan." << endl;
    } else {
        cout << "Meja sudah dipesan pada waktu tersebut. Silakan pilih waktu lain." << endl;
    }
}
// Fungsi untuk menampilkan daftar reservasi
void tampilkanReservasi(const vector<Reservasi>& reservasi) {
    for(size_t i = 0; i < reservasi.size(); i++) {
        cout << "Reservasi " << i + 1 << endl;
        cout << "Nama: " << reservasi[i].nama << endl;
        cout << "Jumlah Orang: " << reservasi[i].jumlahOrang << endl;
        cout << "Tanggal: " << reservasi[i].tanggal << endl;
        cout << "Waktu: " << reservasi[i].waktu << endl;
        cout << "--------------------------" << endl;
    }
}
// Fungsi untuk menghapus reservasi
void hapusReservasi(vector<Reservasi>& reservasi) {
    int nomor;
    cout << "Masukkan nomor reservasi yang ingin dihapus: ";
    cin >> nomor;

    if(nomor > 0 && nomor <= reservasi.size()) {
        reservasi.erase(reservasi.begin() + nomor - 1);
        cout << "Reservasi berhasil dihapus." << endl;
    } else {
        cout << "Nomor reservasi tidak valid." << endl;
    }
}
bool validasiMeja(const vector<Reservasi>& reservasi, const string& tanggal, const string& waktu) {
    for(const auto& res : reservasi) {
        if(res.tanggal == tanggal && res.waktu == waktu) {
            return false; // Meja sudah dipesan pada waktu tersebut
        }
    }
    return true; // Meja tersedia
}
