#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

    double cont = 0;
    double media = 0;
    double suma = 0;
    double desviacion = 0;

int main()
{
    ifstream notas;
    char linea[10];
    notas.open("numeros.txt");
    while(!notas.eof()){
        notas >> linea;
        linea[1]='.';
        double temp = (double)atof(linea);
        suma+=temp;
        cont ++;
        }
        notas.close();
        cout << "Suma:"<< suma << endl;
        cout << "Contador: "<<cont<< endl;
        media = float (suma/cont);
        cout << "Media: "<< media << endl;

}
