#include <iostream>
using namespace std;

int jumlahPencatatan;

int main(){
    cout << "Jumlah hari pencatatan : "; cin >> jumlahPencatatan;
    int suhuHari[jumlahPencatatan];
    for (int i=0; i<jumlahPencatatan; i++){
        cout << "Suhu pada hari ke-" << i+1 << "\t: ";
        cin >> suhuHari[i];
    }

    rataSuhu(jumlahPencatatan, suhuHari);


}