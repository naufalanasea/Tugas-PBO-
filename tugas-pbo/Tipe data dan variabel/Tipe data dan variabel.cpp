#include <iostream>

using namespace std;

int main(){
 
  // deklarasi tipe data variabel
  string nama;
  int umur;
  char jenis_kelamin;
 
  // --- proses input ---
  cout << "Nama :" ;
  // menyimpan data ke variabel
  getline(cin,nama);
 
  cout << "umur : ";
  // menyimpan data ke variabel
  cin >> umur;
 
  cout << "Jenis kelamin (L/P) : ";
  // menyimpan data ke variabel
  cin >> jenis_kelamin;
 
  // --- proses output ---
  cout << "Salam kenal, " << nama << " Usiamu adalah ";
  cout << umur << " jenis kelaminmu adalah "<< jenis_kelamin;
 
  return 0;

}