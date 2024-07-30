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
