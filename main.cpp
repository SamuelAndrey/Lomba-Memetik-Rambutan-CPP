#include <iostream>
#include <string>
using namespace std;

struct lomba {
    string nama;
    int hasil;
};

int main() {
    int n;

    cout << "input jumlah peserta : "; cin >> n;
    lomba peserta[n];


    for(int i=0;i<n;i++) {
        cout << "\ninput nama peserta : "; getline(cin >> std::ws, peserta[i].nama);
        cout << "input hasil rambutan : "; cin >> peserta[i].hasil;
    }

    int maks = peserta[0].hasil;
    string pemenang;
    for(int i=0;i<n;i++) {
        if(peserta[i].hasil > maks) {
            maks = peserta[i].hasil;
            pemenang = peserta[i].nama;
        }
    }

    cout << "\n-------------------------------------";
    cout << "\nPemenang adalah : " << pemenang;
    cout << "\nRambutan untuk Kak ros : " << maks;
    cout << "\n-------------------------------------";

    return 0;
}
