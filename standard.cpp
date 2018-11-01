#include <iostream>
#include <fstream>
#include <cmath>
#include <windows.h>

using namespace std;

const double mojeKola[40] = {36, 48, 48, 48, 48, 72, 109, 68, 68, 46, 40, 40, 40, 86, 86, 74, 80, 71, 28, 50, 30, 62, 44, 52, 95, 39, 103, 56, 60, 60, 60, 60, 100, 42, 84, 47, 73, 83, 38, 67};
int iloscKol = 40;
int iloscZebow;
double blad = 0.000001;

long double stopnie;
long double stopniePlus;
long double modul;
long double parametr = 7.9577;


void oblicz2(){


for (int i = 0; i < iloscKol; i++){
        for (int j = 0; j < iloscKol; j++){
            if(i!=j){
                long double dzielnikKonfiguracji = (24/mojeKola[i])*(mojeKola[j]);
                if(dzielnikKonfiguracji == iloscZebow)
                {
                    cout << mojeKola[i] << " / " << mojeKola[j] << endl;
                }
            }
    }
}

}



void oblicz4(){


int licznik4 = 1;
for (int i = 0; i < iloscKol; i++){
        for (int j = 0; j < iloscKol; j++){
                for (int k = 0; k < iloscKol; k++){
                    for (int l = 0; l < iloscKol; l++){
                            if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l){
                                long double dzielnikKonfiguracji2 = ((24/mojeKola[i])*(mojeKola[j]/mojeKola[k]) * mojeKola[l]);
                                if(dzielnikKonfiguracji2 < (iloscZebow + blad) && (dzielnikKonfiguracji2 > (iloscZebow - blad)))
                                {
                                    cout << mojeKola[i] << " / " << mojeKola[j] << " | ";
                                    cout << mojeKola[k] << " / " << mojeKola[l] << endl;
                                            if (licznik4 == 10)
                                                                    {
                                                                        cout << endl << "Z bledem w ilosci zebow = " << blad << endl;
                                                                        cout << "Wyswietlono 10 pozycji." << endl;
                                                                        cout << "Wcisnij ENTER aby wyswietlic kolejne." << endl << endl;
                                                                        licznik4 = 0;
                                                                        system("pause");

                                                                    }
                                                                    licznik4++;

                                }
                            }

                    }

                }
        }
}

}




void oblicz6(){

    int licznik6 = 1;
    for (int i = 0; i < iloscKol; i++){
            for (int j = 0; j < iloscKol; j++){
                    for (int k = 0; k < iloscKol; k++){
                        for (int l = 0; l < iloscKol; l++){
                                 for (int m = 0; m < iloscKol; m++){
                                        for (int n = 0; n < iloscKol; n++){
                                            if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l && i!=m && i!=n && j!=m && j!=n && k!=m && k!=n && l!=m && l!=n){
                                                    double dzielnikKonfiguracji = ((24/mojeKola[i])*(mojeKola[j]/mojeKola[k]) * (mojeKola[m]/mojeKola[n]) * mojeKola[l]);
                                                    if(dzielnikKonfiguracji < (iloscZebow + blad) && (dzielnikKonfiguracji > (iloscZebow - blad)))
                                                    {
                                                        cout << mojeKola[i] << " | " << mojeKola[j] << "/";
                                                        cout << mojeKola[k] << " | " << mojeKola[m] << "/";
                                                        cout << mojeKola[n] << " | " << mojeKola[l] << endl;

                                                            if (licznik6 == 10)
                                                                    {
                                                                        cout << endl << "Z bledem w ilosci zebow = " << blad << endl;
                                                                        cout << "Wyswietlono 10 pozycji." << endl;
                                                                        cout << "Wcisnij ENTER aby wyswietlic kolejne." << endl << endl;
                                                                        licznik6 = 0;
                                                                        system("pause");

                                                                    }
                                                                    licznik6++;
                                                    }
                                    }

                             }

                         }
                 }
             }

        }
    }
}

void pobierzDane(){
    cout << "Podaj ilosc zebow: ";
    cin >> iloscZebow;
    cout << endl;
}


void standardMain(){
    pobierzDane();
    oblicz2();
    system("pause");
    cout << endl;
    oblicz4();
    system("pause");
    oblicz6();
    system("pause");
}




int main()
{
    standardMain();
    system("pause");
}
