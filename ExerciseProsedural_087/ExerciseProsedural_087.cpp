#include <iostream>
#include <array>
using namespace std;

double rerata(double a, double b) {
    return (a + b) / 2;
}

string status(double c) {
    if (c >= 70)
        return "Diterima";
    else
        return "Ditolak";
}

string status3(double r, double n) {
    if (r >= 70 || n >= 80)
        return "Diterima";
    else
        return "Ditolak";
}

int main() {
    double nilM, nilB;

    int a[20];
    cout << "Data NIM Mahasiswa" << endl;
    for (int i = 0; i < 20; i++) {
        cout << "\n\nNIM Mahasiswa ke- " << (i + 1) << ": ";
        cin >> a[i];
        cout << "\nMasukan Nilai Matematika = ";
        cin >> nilM;
        cout << "\nMasukan Nilai Bahasa = ";
        cin >> nilB;
        cout << "\nStatus Kelulusan ke 1: " << status(rerata(nilM, nilB));
        cout << "\nStatus Kelulusan ke 2: " << status3(rerata(nilM, nilB), nilM);
    }

    return 0;
}

// Memberi Nama dengan NIM menurut saya lebih efisien karena tidak akan terjadi pemberian nama yang sama :)
