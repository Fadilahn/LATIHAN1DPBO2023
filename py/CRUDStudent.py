#import liblary
from Table import Table

#kelas fitur CRUD untuk menambah, mengubah, menghapus data
class CRUDStudent:
    # memiliki atribut student sebagai penyimpanan list vektor
    def __init__(self):
        self.students = []

    # method untuk get boolean, saat mengecheck nim yang ada di list maka operasi akan return nilai
    def getCheckNIM(self, NIM):
        for i in range(len(self.students)):
            # loop sebanyak list
            if self.students[i].getNIM() == NIM:
                # jika nim ada di list maka return 1
                return 1
        # jika tidak maka return 0
        return 0

    # method untuk menambahkan data mahasiswa
    def addStudent(self, student):
        # data pushback ke list
        self.students.append(student)

    # method untuk mengubah data mahasiswa
    def modifyStudent(self, NIM, student):
        for i in range(len(self.students)):
            # loop sebanyak list
            if self.students[i].getNIM() == NIM:
                # jika nim yang mau diubah sama maka jalankan operasi set name
                self.students[i].setName(student.getName())
                self.students[i].setNIM(student.getNIM())
                self.students[i].setPrody(student.getPrody())
                self.students[i].setFaculty(student.getFaculty())
                break

    # method untuk menghapus data mahasiswa
    def deleteStudent(self, NIM):
        for i in range(len(self.students)):
            # loop sebanyak listnya
            if self.students[i].getNIM() == NIM:
                # jika nim sudah sesuai dengan list, maka hapus
                self.students.pop(i)
                break

    # method untuk menampilkan list mahasiswa berupa tabel
    def displayStudentList(self):
        # setting untuk panjang kolomnya
        tabLen = [27, 17, 27, 17]
        tab = Table() # panggil kelas tab
        print("Students Table")

        tab.border2(tabLen, '-') # untuk menampilkan border
        # print judulnya
        print(f"| {'Name':<{tabLen[0]-2}}| {'NIM':<{tabLen[1]-2}}| {'Study Program':<{tabLen[2]-2}}| {'Faculty':<{tabLen[3]-2}}|")
        tab.border2(tabLen, '-')

        for i in range(len(self.students)):
            # loop sebanyak data untuk print datanya
            self.students[i].displayStudentInfo()

        tab.border2(tabLen, '-')

