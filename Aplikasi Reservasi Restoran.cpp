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