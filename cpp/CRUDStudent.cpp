// import liblary
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

#include "Table.cpp"
#include "Student.cpp"

// deklarasi std agar tidak ditulis ulang
using namespace std;

// kelas fitur CRUD. untuk menambah, mengubah, menghapus data
class CRUDStudent{
    private:
        // memiliki atribut student sebagai penyimpanan list vektor
        vector<Student> students;

    public:
        // konstruktor
        CRUDStudent(){

        }

        // method untuk get boolean, saat mengecheck nim yang ada di list maka operasi akan return nilai
        int getCheckNIM(string NIM){
            for(int i=0; i<students.size(); i++){
                // loop sebanyak list
                if(students[i].getNIM() == NIM){
                    // jika nim ada di list maka return 1
                    return 1;
                }
            }
            // jika tidak maka return 0
            return 0;
        }

        // method untuk menambahkan data mahasiswa
        void addStudent(Student student){
            // data pushback ke list
            students.push_back(student);
        }

        // method untuk mengubah data mahasiswa
        void modifyStudent(string NIM, Student student){
            for(int i=0; i<students.size(); i++){
                // loop sebanyak list
                if(students[i].getNIM() == NIM){
                    // jika nim yang mau diubah sama maka jalankan operasi set name
                    students[i].setName(student.getName());
                    students[i].setNIM(student.getNIM());
                    students[i].setPrody(student.getPrody());
                    students[i].setFaculty(student.getFaculty());
                    break;
                }
            }
        }

        // method untuk menghapus data mahasiswa
        void deleteStudent(string NIM){
            for(int i=0; i<students.size(); i++){
                // loop sebanyak listnya
                if(students[i].getNIM() == NIM){
                    // jika nim sudah sesuai dengan list, maka hapus
                    students.erase(students.begin() + i);
                    break;
                }
            }
        }
        
        // method untuk menampilkan list mahasiswa berupa tabel
        void displayStudentList(){
            // setting untuk panjang kolomnya
            int tabLen[4] = {25, 15, 25, 15};
            Table tab; // panggil kelas tab
            cout << "Students Table" << endl;

            tab.border2(tabLen, '-'); // untuk menampilkan border
            // print judulnya
            cout << left << setw(tabLen[0]) << "| Name" << setw(tabLen[1]) << "| NIM" << setw(tabLen[2]) << 
            "| Study Program" << setw(tabLen[3]) << "| Faculty" << "|"<< endl;
            tab.border2(tabLen, '-');
            
            for(int i = 0; i < students.size(); i++){
                // loop sebanyak data untuk print datanya
                students[i].displayStudentInfo();
            }
            
            tab.border2(tabLen, '-');
        }   

        // destruktor
        ~CRUDStudent(){
            
        }
};