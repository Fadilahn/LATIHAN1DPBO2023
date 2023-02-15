import java.util.ArrayList;

// kelas crud, fungsinya untuk mengubah, menambah, menghapus data mahasiswa
class CRUDStudent {
    // deklarasi variabel arraylist untuk menampung data mahasiswa
    private ArrayList<Student> students;

    // konstruktor
    public CRUDStudent() {
        // memori alokasi
        students = new ArrayList<>();
    }

    // method untuk mengechek nim pada list
    public int getCheckNIM(String NIM) {
        for(int i=0; i<students.size(); i++) {
            // looping sebanyak data list
            if(students.get(i).getNIM().equals(NIM)) {
                // jika nim nya sama dengan di data list maka return 1
                return 1;
            }
        }
        // jika tidak maka return 0
        return 0;
    }

    // method untuk menambahkan data
    public void addStudent(Student student) {
        students.add(student);
    }

    // method untuk mengubah data 
    public void modifyStudent(String NIM, Student student) {
        for(int i=0; i<students.size(); i++) {
            // looping sebanyak data list
            if(students.get(i).getNIM().equals(NIM)) {
                // jika nim sudah sesuai maka ubah
                students.get(i).setName(student.getName());
                students.get(i).setNIM(student.getNIM());
                students.get(i).setPrody(student.getPrody());
                students.get(i).setFaculty(student.getFaculty());
                break;
            }
        }
    }

    // method untuk menghapus data
    public void deleteStudent(String NIM) {
        for(int i=0; i<students.size(); i++) {
            // konsepnya hampur sama mencari nim yang sama pada list
            if(students.get(i).getNIM().equals(NIM)) {
                // kalau ketemu maka hapus
                students.remove(i);
                break;
            }
        }
    }

    // method untuk menampilkan data mahasiswa
    public void displayStudentList() {
        // setting untuk panjang tabelnya
        int[] tabLen = {27, 17, 27, 17};
        Table tab = new Table(); // memory alokasi
        System.out.println("Students Table");

        // menampilkan border
        tab.border2(tabLen, '-'); 
        // menampilkan tabel
        System.out.printf("| %-" + (tabLen[0]-2) + "s| %-" + (tabLen[1]-2) + "s| %-" + (tabLen[2]-2) + "s| %-" + (tabLen[3]-2) + "s|%n",
                "Name", "NIM", "Prody", "Faculty");

        tab.border2(tabLen, '-');
        for(int i=0; i<students.size(); i++) {
            // ini datanya
            students.get(i).displayStudentInfo(tabLen);
        }

        tab.border2(tabLen, '-');
    }
}
