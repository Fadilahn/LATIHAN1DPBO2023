// kelas tabel, untuk membuat dan menampilkan tabel
class Table {
    // method border untuk menampilkan border dengan simbol yang diinginkan
    public static void border(int length, char symbol) {
        // tentukan panjang border dan simbol yang diinginkan
        for(int i=0; i<length; i++){
            // looping simbol hingga membentuk baris
            System.out.print(symbol);
        }
        System.out.println();
    }
    
    // method border2 untuk menampilkan border yang sudah ditentukan
    public static void border2(int length[], char symbol) {
        // parameter dengan panjang dan simbol yang diinginkan
        for(int j=0; j<4; j++){
            // loop sebanyak kolom tabel
            System.out.print("+");
            for(int i=0; i<length[j]-1; i++){
                // loop simbolnya sebanyak panjang length
                System.out.print(symbol);
            }
        }
        System.out.println("+");
    }
}