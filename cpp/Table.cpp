// import liblary
#include <iostream>

// deklarasi std agar tidak ditulis ulang
using namespace std;

// kelas tabel, untuk membuat dan menampilkan tabel
class Table{
    public:
        // konstruktor
        Table(){

        }

        // method border untuk menampilkan border dengan simbol yang diinginkan
        void border(int length, char symbol){
            // tentukan panjang border dan simbol yang diinginkan
            for(int i=0; i<length; i++){
                // looping simbol hingga membentuk baris
                cout << symbol;
            }
            cout << endl;
        }
        
        // method border2 untuk menampilkan border yang sudah ditentukan
        void border2(int length[], char symbol){
            // parameter dengan panjang dan simbol yang diinginkan
            for(int j=0; j<4; j++){
                // loop sebanyak kolom tabel
                cout << '+';
                for(int i=0; i<length[j]-1; i++){
                    // loop simbolnya sebanyak panjang length
                    cout << symbol;
                }
            }
            cout << '+' << endl;
        }

        // destruktor
        ~Table(){

        }
};