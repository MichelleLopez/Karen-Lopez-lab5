#include "Matriz.h"
#include <iostream>

Matriz::Matriz(int n, int m) {
    filas = n;
    columnas = m;
    for(int i= 0; i < filas; i++){
                        
        for(int j= 0; j < columnas; j++){
                   
            matriz[i][j] = 0;        
        }
    }                      
}

Matriz::~Matriz(){
}

void Matriz::inicializarMatriz(int **x){
    for(int i=0; i < filas; i++){
        for(int j=0; j < columnas; j++){
            matriz[i][j] = x[i][j]; 
        }
    }
}

void Matriz::printMatriz(){
    for(int i=0; i < filas; i++){
        for(int j=0; j < columnas; j++){
            cout<< matriz[i][j]; 
        }
        cout << endl;
    }
}

ostream &operator<<(ostream &salida, Matriz &m){
    for (int i = 0; i < m.filas; i++) {
        for (int j = 0; j < m.columnas; j++) {
            salida<< m.matriz[i][j]<<" ";
        }
        salida <<endl;
    }
    return salida;
} 

Matriz operator+(Matriz m1, Matriz m2){
    Matriz temp(m1.filas, m1.columnas);
    for(int i=0; i < m1.filas; i++){

        for(int j=0; j < m1.columnas; j++){
            temp.matriz[i][j] = m1.matriz[i][j] + m2.matriz[i][j]; 
        }
    }
    return temp;
}

Matriz operator-(Matriz x){
    Matriz temp(x.filas, x.columnas);
    for(int i=0; i < x.filas; i++){
        for(int j=0; j < x.columnas; j++){
            temp.matriz[i][j] = x.matriz[i][j] * -1; 
        }
    }
    return temp;
}
