#include <iostream>
using namespace std;

int hari;
int suhu[1000];

int main(){
    cout << "Jumlah hari pencatatan : "; cin >> hari;
    for (int i=0; i<hari; i++){
        cout << "Suhu pada hari ke-" << i << "\t: ";
        cin >> suhu[i]
    }

}