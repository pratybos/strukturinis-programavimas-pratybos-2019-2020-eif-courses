#include <iostream>
#include <vector>
#include <cmath>
#include "Leidykla.h"
using namespace std;


struct Namas{
    int id;
    string adresas;
    void informacija(){}

};
class House{
private:
    int id;
    string adresas;
public:
    void informacija(){}
};

void uzpildyti_reiksmemis(int skaicius);
void hello(int sk);
int suma(int a, int b);
void kaina(Leidykla leidykla);
void par(int metai, string pav, string adresas);




int main() {

    Namas rasytojoNamas;
    House muzikantoNamas;

    rasytojoNamas.adresas = "Jasinskio";
    rasytojoNamas.informacija();

    muzikantoNamas.adresas = "KKk";
    muzikantoNamas.informacija();

    int a = 650;
    Leidykla lrytas;
    Leidykla respublika;
    Leidinys gamta;

    gamta.pavadinimas = "Gamta";

    respublika.adresas = "Jasinskio g. 15";
    respublika.pavadinimas = "Respublika";
    respublika.metai = 1995;
    respublika.leidinys = gamta;

    respublika.info();












    int sveikasis = 10;
    char simbolis = '?';
    double suKableliu = 5.6;
    string tekstoEilute = "Labas Ar tu namie? Taip!";
    sveikasis = 50;
    simbolis = 'H';

    uzpildyti_reiksmemis(85445);

    int laikinasis = suma(90,100);

    cout << laikinasis +200 * 2 * laikinasis;

    uzpildyti_reiksmemis(laikinasis);












    return 0;
}
void uzpildyti_reiksmemis(int skaicius){
    int masyvas[]={111,444,777,9,8};

    for(int elem: masyvas){
        cout <<"kitas for ciklas: " <<elem <<endl;
    }
    int k = 0;
    while(k < 5){
        hello(k / 2);
        //cout <<"while ciklas: " <<masyvas[k] <<endl;
        k++;
    }





    for(int i=0; i < 5; i++) {
        if(masyvas[i] % 2 == 0){
            masyvas[i] = skaicius;
        }
        if(i == 3){
            cout << "TRYS" << endl;
        }else {
            cout << "Masyvo el: " << masyvas[i] << endl;
        }




        ///cout << "___________________________"<<endl;
    }




    int kitas[6];


}
void hello(int sk){
    cout << "Labas: " << sk <<endl;
}
int suma(int a, int b){
    return a + b;
}







