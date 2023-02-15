import java.util.Scanner;

// import java.util.*;W

// kelas main
public class Main {
    public static void main(String[] args) {
        // deklarasi input untuk memasukan data
        Scanner input = new Scanner(System.in);
        // deklarasi student untuk menyimpan datanya
        CRUDStudent student = new CRUDStudent();
        Table tab = new Table(); // untuk border saja

        while (true) {
            // sistem akan menampilkan menu dibawah
            System.out.println();
            tab.border(50, '=');
            System.out.println("Write number for choice");
            System.out.println("1. Add Student");
            System.out.println("2. Modify Student");
            System.out.println("3. Delete Student");
            System.out.println("4. Display Student List");
            System.out.println("0. Exit");
            tab.border(50, '=');

            int choice;
            System.out.print("-> ");
            // lalu user akan menginputkan sesuatu
            choice = input.nextInt();
            tab.border(15, '-');

            String NIM, name, prody, faculty, NIMOld;

            // pilihan akan menentukan program berikutnya
            System.out.println();
            if (choice == 1) {
                // jika memilih satu maka untuk menambahkan data
                System.out.print("NIM: ");
                NIM = input.next();
                
                // setelah memasukan nim maka check apakah nim nya ada di list
                if (student.getCheckNIM(NIM) == 0) {
                    // jika tidak maka inputkan data selanjutnya
                    input.nextLine();
                    System.out.print("Name: ");
                    name = input.nextLine();

                    System.out.print("Study program: ");
                    prody = input.nextLine();

                    System.out.print("Faculty: ");
                    faculty = input.nextLine();
                    
                    // setelah sudah variabel akan memanggil fungsi addstuden untuk menambahkan data ke list
                    student.addStudent(new Student(name, NIM, prody, faculty));
                    System.out.println();
                    System.out.println("  [+]> Done");
                } else {
                    System.out.println("  [!]> NIM is already in the list <[!]");
                }
            } else if (choice == 2) {
                // jika pilihan 2 maka mengubah data mahasiswa
                System.out.print("Enter NIM of student to modify: ");
                // input nim mahasiswa yang akan diubah
                NIMOld = input.next();
                System.out.println();

                if (student.getCheckNIM(NIMOld) == 1) {
                    // jika ada maka input data yang baru
                    System.out.print("New NIM: ");
                    NIM = input.next();

                    input.nextLine();
                    System.out.print("New name: ");
                    name = input.nextLine();

                    System.out.print("New study program: ");
                    prody = input.nextLine();

                    System.out.print("New faculty: ");
                    faculty = input.nextLine();
                    
                    // jika sudah panggil fungsinya untuk mengubah data
                    student.modifyStudent(NIMOld, new Student(name, NIM, prody, faculty));
                    System.out.println();
                    System.out.println("  [~]> Done");
                } else {
                    System.out.println("  [!]> NIM is not in the list <[!]");
                }
            } else if (choice == 3) {
                // jika pilihan 3 maka menghapus data mahasiswa
                System.out.print("Enter NIM of student to delete: ");
                // input nim yang akan dihapus
                NIM = input.next();
                System.out.println();

                // check apakah nim ada di list
                if (student.getCheckNIM(NIM) == 1) {
                    // jika ada maha kapus data
                    student.deleteStudent(NIM);
                    System.out.println("  [-]> Done");
                } else {
                    System.out.println("  [!]> NIM is not in the list <[!]");
                }
            } else if (choice == 4) {
                // jika pilihan 4 maka akan menampilkan tabel
                student.displayStudentList();
            } else if (choice == 0) {
                // berhenti dari while
                break;
            } else {
                System.out.println("  [!]> Invalid choice");
            }
        }
    }
}