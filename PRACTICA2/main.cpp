#include <iostream>

using namespace std;

void mostrarmenu();
void ejercicio1();
void ejercicio2();
bool ejercicio3(char cadena1[], char cadena2[]);


int main()
{
unsigned int opcion=1;
while(opcion!=0){

mostrarmenu();
cout<<"Ingrese el numero correspondiente a la opcion de su preferencia: ";
cin>>opcion;

    switch(opcion){
    case 1:
    ejercicio1();

    break;

    case 2:
    ejercicio2();

    break;

    case 3:
    char cadena1[] = "Hola";
    char cadena2[] = "Mundo";
    char cadena3[] = "Hola";
    if (ejercicio3(cadena1, cadena2)) {
        cout << "Las cadenas son iguales" << endl;
    } else {
        cout << "Las cadenas son diferentes" << endl;
    }

    if (ejercicio3(cadena1, cadena3)) {
        cout << "Las cadenas son iguales" << endl;
    } else {
        cout << "Las cadenas son diferentes" << endl;
    }



    break;


    default:
    if(opcion!=0)
    cout<<"Opcion no valida"<<endl;
    break;

    return 0;
}
    }
}



//Funcion menú
void mostrarmenu(){
cout<< "******* **Menu Practica 2** *********"<<endl;
cout<<"Seleccione una opcion"<<endl;
cout<< "1. Minima cantidad de billetes/ monedas a usar"<<endl;
}


void ejercicio1(){
    int array[10]={0,0,0,0,0,0,0,0,0,0}, dinero = 0, residuo = 0, residuoglobal = 0;
    cout<<"Ingrese la cantidad de dinero para la operación: ";
    cin>>dinero;

    for (int i = 0;i<10;i++){



            if(i=1){

            residuo=dinero%50000;
            array[i-1] = dinero/50000;
            dinero=residuo;
            cout<<array[i-1]<<endl;
            cout<<residuo<<endl;

        }
            if(i=2){
            residuo=dinero%20000;
            array[i-1] = dinero/20000;
            dinero=residuo;
            cout<<array[i-1]<<endl;
            cout<<residuo<<endl;
            }

            if(i=3){
            residuo=dinero%10000;
            array[i-1] = dinero/10000;
            dinero=residuo;
            cout<<array[i-1]<<endl;
            cout<<residuo<<endl;

        }
            if(i=4){
            residuo=dinero%5000;
            array[i-1] = dinero/5000;
            dinero=residuo;
            cout<<array[i-1]<<endl;
            cout<<residuo<<endl;
        }
            if(i=5){
            residuo=dinero%2000;
            array[i-1] = dinero/2000;
            dinero=residuo;
            cout<<array[i-1]<<endl;
            cout<<residuo<<endl;
        }
            if(i=6){
            residuo=dinero%1000;
            array[i-1] = dinero/1000;
            dinero=residuo;
            cout<<array[i-1]<<endl;
            cout<<residuo<<endl;

        }
            if(i=7){
            residuo=dinero%500;
            array[i-1] = dinero/500;
            dinero=residuo;
            cout<<array[i-1]<<endl;
            cout<<residuo<<endl;
        }
            if(i=8){
            residuo=dinero%200;
            array[i-1] = dinero/200;
            dinero=residuo;
            cout<<array[i-1]<<endl;
            cout<<residuo<<endl;
        }
            if(i=9){
            residuo=dinero%100;
            array[i-1] = dinero/100;
            dinero=residuo;
            cout<<array[i-1]<<endl;
            cout<<residuo<<endl;
        }

            if(i=10){
            residuo=dinero%50;
            array[i-1] = dinero/50;
            dinero=residuo;
            cout<<array[i-1]<<endl;
            cout<<residuo<<endl;
            residuoglobal=residuo;

            }

    }
    cout<<"Los billetes de $50.000  seran: "<<array[0]<<endl;
    cout<<"Los billetes de $20.000  seran: "<<array[1]<<endl;
    cout<<"Los billetes de $10.000  seran: "<<array[2]<<endl;
    cout<<"Los billetes de $5.000   seran: "<<array[3]<<endl;
    cout<<"Los billetes de $2.000   seran: "<<array[4]<<endl;
    cout<<"Los billetes de $1.000   seran: "<<array[5]<<endl;
    cout<<"Las monedas  de  $500    seran: "<<array[6]<<endl;
    cout<<"Las monedas  de  $200    seran: "<<array[7]<<endl;
    cout<<"Las monedas  de  $100    seran: "<<array[8]<<endl;
    cout<<"Las monedas  de  $50     seran: "<<array[9]<<endl;
    cout<<"El reciduo   de la operación es: "<<residuoglobal<<endl;
}

void ejercicio2(){

    char letras[200];


    for(int i = 0; i < 200; i++) {
        letras[i] = 'A' + rand() % 26;
    }


    cout << "Arreglo de letras mayusculas aleatorias: ";
    for(int i = 0; i < 200; i++) {
        cout << letras[i];
    }
    cout << endl;


    int frecuencia[26] = {0};

    for(int i = 0; i < 200; i++) {
        if(letras[i]=='A')
        frecuencia[0]++;
        if(letras[i]=='B')
        frecuencia[1]++;
        if(letras[i]=='C')
        frecuencia[2]++;
        if(letras[i]=='D')
        frecuencia[3]++;
        if(letras[i]=='E')
        frecuencia[4]++;
        if(letras[i]=='F')
        frecuencia[5]++;
        if(letras[i]=='G')
        frecuencia[6]++;
        if(letras[i]=='H')
        frecuencia[7]++;
        if(letras[i]=='I')
        frecuencia[8]++;
        if(letras[i]=='J')
        frecuencia[9]++;
        if(letras[i]=='K')
        frecuencia[10]++;
        if(letras[i]=='L')
        frecuencia[11]++;
        if(letras[i]=='M')
        frecuencia[12]++;
        if(letras[i]=='N')
        frecuencia[13]++;
        if(letras[i]=='O')
        frecuencia[14]++;
        if(letras[i]=='P')
        frecuencia[15]++;
        if(letras[i]=='Q')
        frecuencia[16]++;
        if(letras[i]=='R')
        frecuencia[17]++;
        if(letras[i]=='S')
        frecuencia[18]++;
        if(letras[i]=='T')
        frecuencia[19]++;
        if(letras[i]=='U')
        frecuencia[20]++;
        if(letras[i]=='V')
        frecuencia[21]++;
        if(letras[i]=='W')
        frecuencia[22]++;
        if(letras[i]=='X')
        frecuencia[23]++;
        if(letras[i]=='Y')
        frecuencia[24]++;
        if(letras[i]=='Z'){
        frecuencia[25]++;}
    }


    cout << "Frecuencia de cada letra en el arreglo: " << endl;
    for(int i = 0; i < 26; i++) {
        char letra = 'A' + i;
        cout << letra << ": " << frecuencia[i] << endl;
    }
}

bool ejercicio3(char cadena1[], char cadena2[]) {
    int longitud1 = 0;
    int longitud2 = 0;

    // obtener longitud de cadena1
    while (cadena1[longitud1] != '\0') {
        longitud1++;
    }

    // obtener longitud de cadena2
    while (cadena2[longitud2] != '\0') {
        longitud2++;
    }

    // verificar longitud de cadenas
    if (longitud1 != longitud2) {
        return false;
    }

    // comparar cadenas
    for (int i = 0; i < longitud1; i++) {
        if (cadena1[i] != cadena2[i]) {
            return false;
        }
    }

    return true;
}

