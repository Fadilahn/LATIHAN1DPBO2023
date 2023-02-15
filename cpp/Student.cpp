// import liblary
#include <iostream>
#include <string>
#include <iomanip>

// deklarasi std agar tidak ditulis ulang
using namespace std;

// kelas mahasiswa, untuk menyimpan data mahasiswa
class Student{
    private:
        // memiliki atribut sebagai berikut, dengan semua tipe data string
        string NIM;
        string name;
        string prody;
        string faculty;

    public:
        // construktor
        Student(string name, string NIM, string prody, string faculty){
            // memiliki parameter untuk set atribut dalam kelas 
            this->name = name;
            this->NIM = NIM;
            this->prody = prody;
            this->faculty = faculty;
        }

        // method untuk menampilkan informasi mahasiswa
        void displayStudentInfo(){
            // setting untuk panjang kolom
            int tabLen[4] = {25, 15, 25, 15};

            // output untuk tampilan
            cout << left << setw(tabLen[0]) << "| " + name << setw(tabLen[1]) << "| " + NIM << 
            setw(tabLen[2]) << "| " + prody << setw(tabLen[3]) << "| " + faculty << "|" << endl;
        }

        // dibawah merupakan kumpulan method setter dan getter dari setiap atribut
        void setName(string name){
            this->name = name;
        }

        string getName(){
            return name;
        }

        void setNIM(string NIM){
            this->NIM = NIM;
        }

        string getNIM(){
            return NIM;
        }

        void setPrody(string prody){
            this->prody = prody;
        }

        string getPrody(){
            return prody;
        }

        void setFaculty(string faculty){
            this->faculty = faculty;
        }

        string getFaculty(){
            return faculty;
        }

        // destruktor
        ~Student(){

        }
};