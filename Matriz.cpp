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

void Matriz::inicializarMatriz(int **m){
    for(int i=0; i < filas; i++){
        for(int j=0; j < columnas; j++){
            matriz[i][j] = m[i][j]; 
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

Matriz operator-(Matriz m){
    Matriz temp(m.filas, m.columnas);
    for(int i=0; i < m.filas; i++){
        for(int j=0; j < m.columnas; j++){
            temp.matriz[i][j] = m.matriz[i][j] * -1; 
        }
    }
    return temp;
}

Matriz operator-(Matriz m1, Matriz m2){
    Matriz temp(m1.filas, m1.columnas);
    for(int i=0; i < m1.filas; i++){

        for(int j=0; j < m1.columnas; j++){
            temp.matriz[i][j] = m1.matriz[i][j] - m2.matriz[i][j]; 
        }
    }
    return temp;
}

Matriz operator *(Matriz m1, Matriz m2){
    Matriz temp(m1.filas, m2.columnas);

    for(int i=0; i < m1.filas; i++){
        for(int j=0; j < m1.columnas; j++){
            temp.matriz[i][j] = 0;
            for(int k=0; k < m1.columnas; k++){

                temp.matriz[i][j]= temp.matriz[i][j]+ m1.matriz[i][k] * m2.matriz[k][j];
            }   
        }
    }
    return temp;
}

Matriz operator ++(Matriz m){ // Sobrecarga para la transpuesta
    Matriz temp(m.filas, m.columnas);
    for(int i=0; i < m.filas; i++){
        for(int j=0; j < m.columnas; j++){
            temp.matriz[i][j] = m.matriz[j][i]; 
        }
    }
    return temp;
}