#include <iostream>
#include "Ordenamiento.h"

using namespace std;

void Encavezado();
void MenuPrincipal();
void CreacionArreglo(int a[],int *n);
void ArregloDesordenado(int a[],int *n);
void ArregloOrdenado(int a[],int *n);

int main(){
    Encavezado();
    MenuPrincipal();
    return 0;
}
void Encavezado(){
    cout<<"\t================================================="<<endl;
    cout<<"\t\tUNIDA DE LAS FUERZAS ARMADAS ESPE"<<endl;
    cout<<"\t================================================="<<endl;
    cout<<"\t\tPROGRAMACION ORIENTADA A OBJETOS"<<endl;
    cout<<"\t\tPROGRAMA BASICO"<<endl;
    cout<<"\t\tDERECK ISAI JIMENEZ CHAMVBA"<<endl;
    cout<<"\t\tING. VERONICA ISABEL MARTINEZ CEPEDA"<<endl;
    cout<<"\t================================================="<<endl;
}

void MenuPrincipal(){
    int menuPrincipla;
    int arreglo[10];
    int elemetosArreglo;
    do{
        cout<<"\t====================================="<<endl;
        cout<<"\t\tMENU DE ORDENAMIENTOS"<<endl;
        cout<<"\t====================================="<<endl;
        cout<<"\tORDENAMIENTO DE BURBUJA.......(1)"<<endl;
        cout<<"\tORDENAMIENTO DE SELECCION.....(2)"<<endl;
        cout<<"\tSALIR DEL PROGRAMA............(3)"<<endl;
        cout<<"\t====================================="<<endl;
        cout<<"INGRESE UN OPCION: ";
        cin>>menuPrincipla;
        system("cls");
        switch(menuPrincipla){
        case 1:
            CreacionArreglo(arreglo,&elemetosArreglo);
            cout<<"\t============================================"<<endl;
            cout<<"\t=========|ORDENAMIENTO DE BURBUJA|=========="<<endl;
            cout<<"\t============================================"<<endl;
            ArregloDesordenado(arreglo,&elemetosArreglo);
            BubbleSort(arreglo,&elemetosArreglo);
            ArregloOrdenado(arreglo,&elemetosArreglo);
            break;
        case 2:
            CreacionArreglo(arreglo,&elemetosArreglo);
            cout<<"\t=============================================="<<endl;
            cout<<"\t=========|ORDENAMIENTO DE SELECCION|=========="<<endl;
            cout<<"\t=============================================="<<endl;
            ArregloDesordenado(arreglo,&elemetosArreglo);
            SelectionSort(arreglo,&elemetosArreglo);
            ArregloOrdenado(arreglo,&elemetosArreglo);
            break;
        case 3:
            cout<<"[GRACIEA POR INGRESAR AL PROGRAMA :3]"<<endl;
            break;
        default:
            cout<<"[LA OPCION INGRESADO ES INCORRECTA]"<<endl;
        }
    }while(menuPrincipla!=3);
}
void CreacionArreglo(int a[],int *n){
    cout<<"\t======================================"<<endl;
    cout<<"\t\tCREACION DE UN ARREGLO"<<endl;
    cout<<"\t======================================"<<endl;
    cout<<"INGRESE CUANTOS ELEMENTOS QUIERE EN EL ARREGLO: ";
    cin>>*n;
    for(int i=0;i<*n;i++){
        cout<<"INGRESE EL ELEMENTO ["<<i+1<<"]: ";
        cin>>a[i];
    }
    system("cls");
}

void ArregloDesordenado(int a[],int *n){
    cout<<"\t==================================="<<endl;
    cout<<"\t\tARREGLO DESORDENADO"<<endl;
    cout<<"\t==================================="<<endl;
    for(int i=0;i<*n;i++){
        cout<<"\t["<<a[i]<<"]";
    }
    cout<<endl;
}

void ArregloOrdenado(int a[],int *n){
    cout<<"\t======================================================="<<endl;
    cout<<"\t\tARREGLO ORDENADO DE MANERA ASCENDENTE"<<endl;
    cout<<"\t======================================================="<<endl;
    for(int i=0;i<*n;i++){
        cout<<"\t["<<a[i]<<"]";
    }
    cout<<endl;
}
