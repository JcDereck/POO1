#ifndef ORDENAMIENTO_H_INCLUDED
#define ORDENAMIENTO_H_INCLUDED

using namespace std;
//FUENCION DE ORDENAMIENTO BURBUJA
void BubbleSort(int a[], int *n){
    int aux;
    cout<<"\t============================================"<<endl;
    cout<<"\t\t:::PASOS DEL ORDENAMIENTO:::"<<endl;
    cout<<"\t============================================"<<endl;
    for(int i=0;i<*n;i++){
        for(int j=0;j<*n-1;j++){
            if(a[j]>a[j+1]){
                aux=a[j];
                a[j]=a[j+1];
                a[j+1]=aux;
                for(int k=0;k<*n;k++){
                    cout<<"\t["<<a[k]<<"]";
                }
                cout<<endl;
            }
        }
    }
}
//FUNCION DE ORDENAMIENTO SELECCION
void SelectionSort(int a[], int *n){
    int aux, indiceMenor;
    for(int i=0;i<*n-1;++i){
        indiceMenor=i;
        for(int j=i+1;j<*n;++j){
            if(a[j]<a[indiceMenor]){
                indiceMenor=j;
            }
        }
        if(indiceMenor!=i){
            aux=a[i];
            a[i]=a[indiceMenor];
            a[indiceMenor]=aux;
            for(int k=0;k<*n;k++){
                cout<<"\t["<<a[k]<<"]";
            }
            cout<<endl;
        }
    }
}
#endif // ORDENAMIENTO_H_INCLUDED
