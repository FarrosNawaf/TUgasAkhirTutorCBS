#include <iostream>
using namespace std;

void rincianSuhuHarian(int jumlahPencatatan, int suhuHari[]){
    int suhuEkstrem = 0;
    for (int k = 0; k < jumlahPencatatan; k++){
        cout << "- Hari " << k + 1 << " : " << suhuHari[k] << " C ";
        if (suhuHari[k] <= 20){
            cout << " (Dingin)" << endl;
            if (suhuHari[k] <= 10){
                suhuEkstrem++;
            }
        } else if (suhuHari[k] > 20 && suhuHari[k] < 33){
            cout << " (Sejuk)" << endl;
        } else if (suhuHari[k] >= 33){
            cout << " (Panas)" << endl;
            if (suhuHari[k] >= 36){
                suhuEkstrem++;
            }
        }
    }
    cout << "Dalam " << jumlahPencatatan << " hari pencatatan, terjadi " << suhuEkstrem << " kali suhu ekstrem"<< endl;
}


void rataSuhu(int jumlahPencatatan, int suhuHari[]){
    float totalSuhu=0;
    for (int h=0; h<jumlahPencatatan; h++){
        totalSuhu += suhuHari[h];
    }
    float rataSuhu = totalSuhu / jumlahPencatatan;
    cout << "Rata-rata suhu adalah " << rataSuhu << "C"<< endl;
}

void suhuMinMax (int jumlahPencatatan, int suhuHari[]){
    int suhuMin = suhuHari[0];
    int suhuMax = suhuHari[0];

    for (int m=0; m<jumlahPencatatan; m++){
        if (suhuHari[m]<suhuMin){
            suhuMin = suhuHari[m];
        }
        if (suhuHari[m]>suhuMax){
            suhuMax = suhuHari[m];
        }
    }
    cout << "Suhu tertinggi adalah " << suhuMax << "C" << endl;
    cout << "Suhu terendah adalah " << suhuMin << "C" << endl; 
}

void hasilPencatatan(string namaKota, int jumlahPencatatan, int suhuHari[]){
    cout << "\n\n\n\n\n";
    cout << "=================================" <<endl;
    cout << "HASIL ANALISIS KOTA " << namaKota << endl;
    cout << "=================================" <<endl;
    rincianSuhuHarian(jumlahPencatatan, suhuHari);
    cout << "=================================" <<endl;
    rataSuhu(jumlahPencatatan, suhuHari);
    suhuMinMax(jumlahPencatatan, suhuHari);
    cout << "=================================" <<endl;
}

int main(){
    int jumlahPencatatan;
    string namaKota= "";
    cout << "Nama kota \t\t: "; cin >> namaKota;
    cout << "Jumlah hari pencatatan \t: "; cin >> jumlahPencatatan;
    int suhuHari[jumlahPencatatan];
    for (int i=0; i<jumlahPencatatan; i++){
        cout << "Suhu pada hari ke-" << i+1 << "\t: ";
        cin >> suhuHari[i];
    }
    hasilPencatatan(namaKota, jumlahPencatatan, suhuHari);
}