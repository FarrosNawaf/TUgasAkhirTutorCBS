#include <iostream>
using namespace std;

// hitung rata rata suhu dari setiap hari
void hitungRataSuhu(int hari, int suhu[]){
    float totalSuhu = 0;
    for (int j = 0; j < hari; j++){
        totalSuhu += suhu[j];
    }
    float rataSuhu = totalSuhu / hari;
    cout << rataSuhu;
}

// mencari suhu tertinggi dan terendah dari semua hari
void suhuMinMax(int hari, int suhu[]){
    int suhuMax = suhu[0];
    int suhuMin = suhu[0];
    for(int l = 1; l < hari; l++){
        if(suhu[l] > suhuMax){
            suhuMax = suhu[l];
        }
        if (suhu[l] < suhuMin){
            suhuMin = suhu[l];
        }
    }
    cout << "Suhu Tertinggi\t: " << suhuMax << " C" << endl;
    cout << "Suhu Terendah\t: " << suhuMin << " C" << endl;
}

// mengkategorikan status hari sesuai dengan suhunya
void rincianSuhuHarian(int hari, int suhu[]){
    for (int k = 0; k < hari; k++){
        cout << "- Hari " << k + 1 << " : " << suhu[k] << " C ";
        if (suhu[k] <= 20){
            cout << " (Dingin)" << endl;
        } else if (suhu[k] > 20 && suhu[k] < 30){
            cout << " (Sejuk)" << endl;
        } else if (suhu[k] >= 30){
            cout << " (Panas)" << endl;
        }
    }
}

// badan utama dari program ini
int main(){
    system("cls");
    int hari;
    int suhu[7];
    do{
        cout << "Jumlah hari\t: "; cin >> hari;
        if (hari > 7 || hari < 1){
            cout << "[Error] Jumlah hari tidak boleh lebih dari 7" << endl;
        }
    } while (hari > 7 || hari < 1);

    for (int i = 0; i < hari; i++){
        cout << "Suhu hari ke-" << i + 1 << "\t: ";
        cin >> suhu[i]; 
    }

    cout << "\n=== Laporan Analisis Suhu ===" << endl;
    if (hari == 1){ // jika hanya ada satu hari, langsung print suhu hari itu untuk rata ratanya
        cout << "Suhu rata-rata\t: " << suhu[0] << " C" << endl;
    } else if (hari > 1){
        cout << "Suhu Rata-rata\t: ";
        hitungRataSuhu(hari, suhu); // memanggil fungsi penghitung rata rata suhu harian
        cout << " C" << endl;
    }
    suhuMinMax(hari, suhu); // memanggil fungsi suhu tertinggi dan terendah

    // ngeprint rincian suhu harian dengan statusnya juga
    cout << "\nRincian Harian:" << endl;
    rincianSuhuHarian(hari, suhu);
}