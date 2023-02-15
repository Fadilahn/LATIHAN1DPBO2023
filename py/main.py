# impor library
from Student import Student
from CRUDStudent import CRUDStudent
from Table import Table


# panggil class mahasiswa
student = CRUDStudent()
# class table untuk membuat border
tab = Table()

while True:
    # desain tampilan
    print()
    tab.border(50, '=')
    # tampilkan pilihan untuk dipilih
    print("Write number for choice")
    print("1. Add Student")
    print("2. Modify Student")
    print("3. Delete Student")
    print("4. Display Student List")
    print("0. Exit")
    tab.border(50, '=')

    # input pilihannya
    choice = int(input("-> "))
    tab.border(15, '-')

    # deklarasi data mahasiswa
    NIM = ""
    name = ""
    prody = ""
    faculty = ""
    NIMOld = ""

    print()
    # kondisi sesuai dengan pilihan
    if choice == 1:
        # jika pilihan merupakan 1, maka add mahasiswa
        NIM = input("NIM: ") # input nim dulu

        # nanti check apakah nim sudah ada di list
        if student.getCheckNIM(NIM) == 0:
            # jika tidak maka input sebagian data lainnya
            name = input("Name: ")
            prody = input("Study program: ")
            faculty = input("Faculty: ")

            # panggil kelas add strudent dengan memasukan ke parameter
            student.addStudent(Student(name, NIM, prody, faculty))
            print()
            print("  [+]> Done")
        else:
            print("  [!]> NIM is already in the list <[!]")

    elif choice == 2:
        # jika 2, maka mengubah data mahasiswa
        NIMOld = input("Enter NIM of student to modify: ")
        print()

        # check pada list apakah nim ada
        if student.getCheckNIM(NIMOld) == 1:
            # jika ada input data baru mahasiswa
            NIM = input("New NIM: ")

            # check lagi apakah nim sudah ada di dalam list
            if student.getCheckNIM(NIM) == 0:
                # jika tidak maka input sebagian data lainnya
                name = input("New name: ")
                prody = input("New study program: ")
                faculty = input("New faculty: ")

                # panggil methid modify untuk mengubah data
                student.modifyStudent(NIMOld, Student(name, NIM, prody, faculty))
                print()
                print("  [~]> Done")
            else:
                print("  [!]> NIM is already in the list <[!]")
        else:
            print("  [!]> NIM is not in the list <[!]")

    elif choice == 3:
        # jika 3, maka lakukan proses menghapus
        NIM = input("Enter NIM of student to delete: ")
        print()

        # check nim pada list
        if student.getCheckNIM(NIM) == 1:
            # jika ada, maka panggil method delete
            student.deleteStudent(NIM)
            print("  [-]> Done")
        else:
            print("  [!]> NIM is not in the list <[!]")

    elif choice == 4:
        # jika 4, maka tampilkan tabel
        student.displayStudentList()

    elif choice == 0:
        # jika 0 maka berhenti
        break

    else:
        # jika pilihan lain maka tampilkan invalid choice
        print("  [!]> Invalid choice")

