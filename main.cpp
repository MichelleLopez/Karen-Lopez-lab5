#include "Matriz.h"
#include <iostream>
#include <vector>
using namespace std;
void inicializarMatriz(int**);
void recibirMatrices();

int main(int argc, char const *argv[])
{
	int opcion;
	vector<Matriz*>listaMatrices;

	do
	{
		cout<<"********Calculadora Matricial********"<<endl;
		cout<<"Seleccione la opcion que desea"<<endl;
		cout<<"1. Sumar matrices"<<endl;
		cout<<"2. Menos unitario"<<endl;
		cout<<"3. Restar matrices"<<endl;
		cout<<"4. Multiplicar matrices"<<endl;
		cout<<"5. Transpuesta"<<endl;
		cout<<"6. Comparación"<<endl;
		cout<<"7. Diferencia"<<endl;
		cout<<"8. Inversa"<<endl;
		cout<<"9. Salir"<<endl;
		cin>>opcion;

		if (opcion == 1)
		{
			int filas1, columnas1;
			cout<<"Ingrese el numero de filas de la primera mariz: ";
			cin>>filas1;
			cout<<endl;
			cout<<"Ingrese el numero de columnas de la primera matriz: ";
			cin>>columnas1;
			cout<<endl;
			int** m1 = new int* [filas1];

			for (int j = 0; j < filas1; j++) {
				m1[j] = new int[columnas1]; 
			}
			for (int i = 0; i < filas1; i++){
				for (int j = 0; j < columnas1; j++)
				{
					cout<<"Ingrese la posición Matriz["<<i<<"]["<<j<<"]: "; 
					cin>>m1[i][j];
					cout<<endl;
				}
			}
			Matriz matriz1(filas1, columnas1);
			matriz1.inicializarMatriz(m1);
			cout<<"Matriz 1 llena"<<endl;
			do
			{
				int filas2, columnas2;
				cout<<"Ingrese el numero de filas de la segunda mariz: ";
				cin>>filas2;
				cout<<endl;
				cout<<"Ingrese el numero de columnas de la segunda matriz: ";
				cin>>columnas2;
				cout<<endl;
				if (filas2 != filas1 && columnas2 != columnas1)
				{
					cout<<"No se puede realizar la suma, el tamaño de la matriz2 debe ser igual a la matriz1"<<endl;
					break;
				}
				int** m2 = new int* [filas2];
				for (int j = 0; j < filas2; j++) {
					m2[j] = new int[columnas2]; 
				}	
				for (int i = 0; i < filas2; i++)
				{
					for (int j = 0; j < columnas2; j++)
					{
						cout<<"Ingrese la posición Matriz["<<i<<"]["<<j<<"]: "; 
						cin>>m2[i][j];
						cout<<endl;
					}
				}
				Matriz matriz2(filas2, columnas2);
				matriz2.inicializarMatriz(m2);
				cout<<"Matriz 2 llena"<<endl;
				cout<<"Matriz 1 :"<<endl;
				cout<<matriz1<<endl;
				cout<<"Matriz 2 :"<<endl;
				cout<<matriz2<<endl;
				Matriz suma(filas2, columnas2);
				suma = matriz1 + matriz2;
				cout<<"Suma:"<<endl;
				cout<<suma;
			} while(opcion != 0);
		}

		if (opcion == 2)
		{
			int filas1, columnas1;
			cout<<"Ingrese el numero de filas de la matriz: ";
			cin>>filas1;
			cout<<endl;
			cout<<"Ingrese el numero de columnas de la matriz: ";
			cin>>columnas1;
			cout<<endl;
			int** m1 = new int* [filas1];

			for (int j = 0; j < filas1; j++) {
				m1[j] = new int[columnas1]; 
			}
			for (int i = 0; i < filas1; i++){
				for (int j = 0; j < columnas1; j++)
				{
					cout<<"Ingrese la posición Matriz["<<i<<"]["<<j<<"]: "; 
					cin>>m1[i][j];
					cout<<endl;
				}
			}
			Matriz matriz1(filas1, columnas1);
			matriz1.inicializarMatriz(m1);
			cout<<"Matriz llena"<<endl;
			cout<<matriz1;
			matriz1 = -matriz1;
			cout<<"El menos unitario de la matriz es:"<<endl;
			cout<<matriz1;
		}

		if (opcion == 3)
		{
			
		}

	} while (opcion!=9);

	return 0;
}

void inicializarMatrix(char** matriz, int filas, int columnas){
	for (int i = 0; i < filas; i++)
	{
		matriz[i] = new char[columnas];
	}

}
void recibirMatrices(){
	
	
}