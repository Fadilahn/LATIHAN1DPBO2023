# inport liblary
import sys

# Kelas Mahasiswa, untuk menyimpan data mahasiswa
class Student:
    nama = ""
    NIM = ""
    prody = ""
    fakultas = ""
    # Konstruktor
    def __init__(self, nama, NIM, prody, fakultas):
        # Inisialisasi atribut dalam kelas Mahasiswa
        self.nama = nama
        self.NIM = NIM
        self.prody = prody
        self.fakultas = fakultas

    # Metode untuk menampilkan informasi mahasiswa
    def displayStudentInfo(self):
        # Setting panjang kolom
        tabLen = [27, 17, 27, 17]

        # Output tampilan informasi mahasiswa
        print(f"| {self.nama:<{tabLen[0]-2}}| {self.NIM:<{tabLen[1]-2}}| {self.prody:<{tabLen[2]-2}}| {self.fakultas:<{tabLen[3]-2}}|")

    # Setter dan getter untuk setiap atribut dalam kelas Mahasiswa
    def setNama(self, nama):
        self.nama = nama

    def getNama(self):
        return self.nama

    def setNIM(self, NIM):
        self.NIM = NIM

    def getNIM(self):
        return self.NIM

    def setPrody(self, prody):
        self.prody = prody

    def getPrody(self):
        return self.prody

    def setFakultas(self, fakultas):
        self.fakultas = fakultas

    def getFakultas(self):
        return self.fakultas