#include <iostream>
using namespace std;

struct Mahasiswa{
  int nim;
  string nama;
  Mahasiswa * next;
};

struct Buku{
  int kode;
  string judul;
};

Mahasiswa* head = nullptr;

void DataMahasiswa(int nim, string nama){
    Mahasiswa* baru = new Mahasiswa{nim, nama, nullptr};
    if(head == nullptr){
        head = baru;
    }
    else{
        Mahasiswa* temp = head;
        while(temp -> next != nullptr){
            temp = temp -> next;
        }
        temp -> next = baru;
    }
    cout << "Data berhasil ditambahkan";
}

int main() {
  int pilihan = 0, nim;
  string nama;

      cout << "Masuk Sebagai: " <<endl;
      cout << "1. Admin " <<endl;
      cout << "2. Mahasiswa " <<endl;
      cout << "3. Keluar " <<endl;
      cout << "Pilih menu: ";
      cin >> pilihan;
      cin.ignore();

      switch(pilihan){
          case 1:
              cout << "Masukan Nama: ";
              getline(cin, nama);
              break;
          case 2:
              cout << "Masukan NIM: "; cin >> nim;
              cin.ignore();
              cout << "Masukan Nama: ";
              getline(cin, nama);
              DataMahasiswa(nim, nama);
              break;
          case 3:
              cout << "Keluar dari program." << endl;
              break;
          default:
              cout << "Pilihan tidak ada. Coba lagi." << endl;
      }
  
  return 0;
}
