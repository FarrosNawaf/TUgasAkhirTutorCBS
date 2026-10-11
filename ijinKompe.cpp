#include <iostream>
using namespace std;

int jumlahPencatatan;

void rataSuhu(int jumlahPencatatan, int suhuHari[]){
    float totalSuhu=0;
    for (int h=0; h<jumlahPencatatan; h++){
        totalSuhu += suhuHari[h];
    }
    float rataSuhu = totalSuhu / jumlahPencatatan;
    cout << "Rata-rata suhu adalah" << rataSuhu;
}
int main(){
    cout << "Jumlah hari pencatatan : "; cin >> jumlahPencatatan;
    int suhuHari[jumlahPencatatan];
    for (int i=0; i<jumlahPencatatan; i++){
        cout << "Suhu pada hari ke-" << i+1 << "\t: ";
        cin >> suhuHari[i];
    }

    for (int i=0; i<jumlahPencatatan; i++){
        cout << suhuHari[i] << endl;
    }
    
    rataSuhu(jumlahPencatatan, suhuHari);


}