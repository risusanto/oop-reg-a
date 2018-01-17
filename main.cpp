#include <iostream>

using namespace std;

typedef struct _data{
    int id_data;
    int data;
}dataKursi;

int main()
{
    dataKursi MyKursi[6];
    dataKursi KursiLain;

    for (int i = 0; i < 6; i++){
        MyKursi[i].id_data = i+1;
        MyKursi[i].data = i*10;
    }

    for(int i = 0; i < 6; i++){
        cout<<"array [" << i << "]: " << endl;
        cout <<"id_kursi (" << MyKursi[i].id_data <<")" << endl;
        cout << endl;
    }

    return 0;
}
