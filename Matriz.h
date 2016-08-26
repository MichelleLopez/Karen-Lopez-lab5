#include <iostream>
using namespace std;
class Matriz {

	private:
		int matriz[100][100];
		int filas, columnas;

	public:
		Matriz();
		Matriz(int n, int m);
		~Matriz();

		void inicializarMatriz(int **x);
		void printMatriz();
		friend ostream& operator << (ostream &salida, Matriz &z);
		friend Matriz operator+(Matriz m1, Matriz m2);
		friend Matriz operator-(Matriz m1, Matriz m2);
		friend Matriz operator-(Matriz m1);
		friend Matriz operator*(Matriz m1, Matriz m2);

		void invermat(double **a);

};
