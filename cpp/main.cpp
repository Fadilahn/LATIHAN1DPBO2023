// import liblary
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

#include "CRUDStudent.cpp"
// #include "Student.cpp"
// #include "Table.cpp"

// deklarasi std agar tidak ditulis ulang
using namespace std;

// fungsi main
int main(){

    // panggil class mahasiswanya
    CRUDStudent student;
    Table tab; // class table untuk membuat border

    while(true){
        // desain tampilan
        cout << endl;
        tab.border(50, '=');
        // jadi sistem akan menampilkan pilihan untuk dipilih
        cout << "Write number for choice" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Modify Student" << endl;
        cout << "3. Delete Student" << endl;
        cout << "4. Display Student List" << endl;
        cout << "0. Exit" << endl;
        tab.border(50, '=');

        // input pilihannya
        int choice;
        cout << "-> ";
        cin >> choice;
        tab.border(15, '-');

        // deklarasi data mahasiswanya
        string NIM;
        string name;
        string prody;
        string faculty;
        string NIMOld;

        cout << endl;
        // kondisi sesuai dengan pilihan
        if(choice == 1){
            // jika pilihan merupakan 1, maka add mahasiswa
            cout << "NIM: ";
            cin >> NIM; // input nim dulu

            // nanti check apakah nim sudah ada di list
            if(student.getCheckNIM(NIM) == 0){
                // jika tidak maka input sebagian data lainnya
                cout << "Name: ";
                cin.ignore();
                getline(cin, name);

                cout << "Study program: ";
                getline(cin, prody);

                cout << "Faculty: ";
                getline(cin, faculty);

                // maka panggil kelas add strudent dengan memasukan ke parameter
                student.addStudent(Student(name, NIM, prody, faculty));
                cout << endl;
                cout << "  [+]> Done" << endl;
            }
            else{
                cout << "  [!]> NIM is already in the list <[!]" << endl;
            }

        } else if(choice == 2){
            // jika 2, maka mengubah data mahasiswa
            cout << "Enter NIM of student to modify: ";
            cin >> NIMOld; // input nim
            cout << endl;

            // check pada list apakah nim ada
            if(student.getCheckNIM(NIMOld) == 1){
                // jika ada input data baru mahasiswa
                cout << "New NIM: ";
                cin >> NIM;

                // check lagi apakah nim sudah ada di dalam list
                if(student.getCheckNIM(NIM) == 0){
                    // jika tidak maka input sebagian data lainnya
                    cout << "New name: ";
                    cin.ignore();
                    getline(cin, name);

                    cout << "New study program: ";
                    getline(cin, prody);

                    cout << "New faculty: ";
                    getline(cin, faculty);

                    // panggil methid modify untuk mengubah data
                    student.modifyStudent(NIMOld, Student(name, NIM, prody, faculty));
                    cout << endl;
                    cout << "  [~]> Done" << endl;
                }
                else{
                    cout << "  [!]> NIM is already in the list <[!]" << endl;
                }
            }
            else{
                cout << "  [!]> NIM is not in the list <[!]" << endl;
            }

        } else if(choice == 3){
            // jika 3, maka lakukan proses menghapus
            cout << "Enter NIM of student to delete: ";
            cin >> NIM; // input nim
            cout << endl;   
            
            // check nim pada list
            if(student.getCheckNIM(NIM) == 1){
                // jika ada, maka panggil method delete
                student.deleteStudent(NIM);
                cout << "  [-]> Done" << endl;
            }
            else{
                cout << "  [!]> NIM is not in the list <[!]" << endl;
            }
            
        } else if(choice == 4){
            // jika 4, maka tampilkan tabel
            student.displayStudentList();

        } else if(choice == 0){
            // jika 0 maka berhenti
            break;

        } else{
            // jika pilihan lain maka tampilkan invalid choice
            cout << "  [!]> Invalid choice" << endl;
        }
    }

    return 0;
}