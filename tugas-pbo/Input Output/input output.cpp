#include <iostream>//cin-cout
#include <conio.h> //getch

using namespace std;

int main(){
      char nim[20], nohp [14]; //gunakan cin
      string ucapan="Selamat Datang", nama, asal, alamat ;

 //masukkan
 cout<<"masukan nama : ";getline(cin, nama); //getline input data lebih dari 1 kata
 cout<<"masukan NIM : ";cin>>nim;
 cout<<"masukan No HP : ";cin>>nohp;
 cout<<"masukan alamat : ";cin>>alamat;
 cout<<"masukan asal   : ";cin>>asal;

 cout<<endl<<endl;

 //Keluaran
 cout<<ucapan<<" "<<nama<<" di Program C plus Plus"<<endl;
 cout<<nama;
 cout<<"\n Nama   : "<<nama;
 cout<<"\n NIM    : "<<nim;
 cout<<"\n No HP  : "<<nohp;
 cout<<"\n Alamat : "<<alamat;
 cout<<"\n Asal   : "<<asal;


getch; // menahan program
}
