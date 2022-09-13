#include <iostream>
#include <string>
using namespace std;

struct lomba {
    string nama[30];
    int hasil[30];
};

int main() {
    int n;
    lomba peserta;

    cout << "input jumlah peserta : "; cin >> n;

    for(int i=0;i<n;i++) {
        cout << "\ninput nama peserta : "; getline(cin >> std::ws, peserta.nama[i]);;
        cout << "input hasil rambutan : "; cin >> peserta.hasil[i];
    }

    int maks = peserta.hasil[0];
    string pemenang;
    for(int i=0;i<n;i++) {
        if(peserta.hasil[i] > maks) {
            maks = peserta.hasil[i];
            pemenang = peserta.nama[i];
        }
    }

    cout << "Pemenang adalah : " << pemenang << endl;
    cout << "Rambutan untuk Kak ros : " << maks;

    return 0;
}