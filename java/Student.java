// kelas mahasiswa, untuk menyimpan data mahasiswa
class Student {
    // memiliki atribut sebagai berikut, dengan semua tipe data string
    private String NIM;
    private String name;
    private String prody;
    private String faculty;

    // construktor
    public Student(String name, String NIM, String prody, String faculty) {
        // memiliki parameter untuk set atribut dalam kelas 
        this.name = name;
        this.NIM = NIM;
        this.prody = prody;
        this.faculty = faculty;
    }

    // method untuk menampilkan informasi mahasiswa
    public void displayStudentInfo(int[] tabLen) {
        // output untuk tampilan
        System.out.format("| %-" + (tabLen[0]-2) + "s| %-" + (tabLen[1]-2) + "s| %-" + (tabLen[2]-2) + "s| %-" + (tabLen[3]-2) + "s|\n", name, NIM, prody, faculty);
    }

    // dibawah merupakan kumpulan method setter dan getter dari setiap atribut
    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setNIM(String NIM) {
        this.NIM = NIM;
    }

    public String getNIM() {
        return NIM;
    }

    public void setPrody(String prody) {
        this.prody = prody;
    }

    public String getPrody() {
        return prody;
    }

    public void setFaculty(String faculty) {
        this.faculty = faculty;
    }

    public String getFaculty() {
        return faculty;
    }
}