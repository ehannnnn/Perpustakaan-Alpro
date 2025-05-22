#include <iostream>
using namespace std;

struct Mahasiswa{};
struct Buku{};

//ADMIN
void inputBuku(){}
void hapusBuku(){}
void cariMahasiswa(){}

//MAHASISWA
void listBuku(){}
void pinjamBuku(){}
void kembalikanBuku(){}

//MENU
void menuAdmin(){
    int pilihan;
    string kode, judul, penulis;

    do {
        cout << "\n-- MENU ADMIN --\n"; 
        cout << "1. Input Buku" << endl;
        cout << "2. Hapus Buku" << endl;
        cout << "3. Daftar Mahasiswa" << endl;
        cout << "4. Daftar Buku" <<endl;
        cout << "Pilih menu: ";cin >> pilihan;

        switch(pilihan){
            case 1 :
                cout 
        }

        
    }while(pilihan != 3);
}

void menuMahasiswa(){}


int main() {
    int pilihan, nim;
    string nama, user, pass;
    
    do{
        cout << endl;
        cout << "===== SISTEM PERPUSTAKAAN ===== " <<endl;
        cout << "1. Login Sebagai Admin" <<endl;
        cout << "2. Login Sebagai Mahasiswa" <<endl;
        cout << "3. Keluar " <<endl;
        cout << "Pilih menu: ";cin >> pilihan;

        switch(pilihan){
            case 1:
                cout << "Masukan Username: ";cin >> user;
                cout << "Masukan Password: ";cin >> pass;
                if(user != "admin"){
                    cout << "Username yang anda masukkan salah." << endl;
                }
                else if(pass != "admin123"){
                    cout << "Password yang anda masukkan salah." << endl;
                } 
                else{
                    cout << "Login berhasil." << endl;
                    menuAdmin();
                }
                break;
            case 2:
                cout << "Masukan NIM: "; cin >> nim;
                cin.ignore();
                cout << "Masukan Nama: ";
                getline(cin, nama);
                menuMahasiswa();
                break;
            case 3:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak ada. Coba lagi." << endl;
        }
    }while(pilihan != 3);
        
  return 0;
}
