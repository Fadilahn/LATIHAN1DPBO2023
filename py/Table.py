# inport liblary
import sys

# Kelas Tabel untuk membuat dan menampilkan tabel
class Table:
    # Metode untuk menampilkan border dengan simbol tertentu
    def border(self, panjang, simbol):
        # Menentukan panjang border dan simbol yang akan digunakan
        for i in range(panjang):
            # Melakukan looping pada simbol untuk membentuk baris
            sys.stdout.write(simbol)
        sys.stdout.write("\n")

    # Metode untuk menampilkan border dengan panjang dan simbol tertentu
    def border2(self, panjang, simbol):
        # Parameter dengan panjang dan simbol yang akan digunakan
        for j in range(4):
            # Melakukan looping sebanyak jumlah kolom dalam tabel
            sys.stdout.write("+")
            for i in range(panjang[j]-1):
                # Melakukan looping pada simbol sesuai dengan panjang yang diberikan
                sys.stdout.write(simbol)
        sys.stdout.write("+\n")