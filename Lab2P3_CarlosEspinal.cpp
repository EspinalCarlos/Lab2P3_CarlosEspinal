#include <iostream>
using namespace std;

void menu() {
    cout << "---- MENU DE OPCIONES ----\n" << "Opcion 1: Tablero de Ajedrez\n" << "Opcion 2: Raiz n de x\n" << "Opcion 3: SALIDA";
}

void ejercicio1() {
	// Esta funcion imprime un tablero de ajedrez dependiendo de el parametro que el usuario asigne.
	int numtablero;
	cout << "Ingrese un numero: ";
	cin >> numtablero;

	//for para filas
	for (size_t i = 0; i < numtablero; i++){
		//condicion para las filas pares 
		if (i%2 == 0){
			for (size_t i = 0; i < numtablero; i++){
				if (i%2 == 0){
					cout << "1";
				}
				else if (i%2 != 0){
					cout << "0";
				}
			}
			cout << endl;
			
		}
		//condicion para las filas impares
		else {
			for (size_t i = 0; i < numtablero; i++){
				if (i%2 == 0){
					cout << "0";
				}
				else if (i%2 != 0) {
					cout << "1";
				}
			}
			cout << endl;

		}

	}

}

void ejercicio2() {
	//Esta funcion encuentra la raiz de n de x mediante iteraciones con un bucle

	int iteraciones = 0;
	do {
		double x, n;
		cout << "Ingrese el valor de de x: ";
		cin >> x;
		cout << endl;
		cout << "Ingrese el valor de n: ";
		cin >> n;
		cout << endl;
		cout << "Ingrese un numero maximo de iteraciones: ";
		cin >> iteraciones;

		if (iteraciones < 10){
			cout << "Ha ingresado un dato incorrecto\n";
		}
		else {
			double min, mid, max;
			min = 1.0;
			max = x;
			for (int i = 0; i < iteraciones; i++){
			
				mid = (min + max) /(2);
				
				if ((pow(mid,n) > x)) {
					cout << "llega\n";
					min = min;
					max = mid;
				}
				else if (pow(mid, n) < x) {
					cout << "llega 2\n";
					min = mid;
					max = max;
				}
				else if ((int)pow(mid, n) == x) {
					cout << "llega 3\n";
					break;
				}

			}
			cout << (int)pow(mid, n) << endl;
			//impresion final de la funcion
			cout << "Raiz " << n << " de " << x << " = " << mid <<endl;
		}


	} while (iteraciones < 10);



}


int main(){
	int opcion;
	do{
		menu();
		cout << "Ingrese la opcion que desea utilizar: ";
		cin >> opcion; 
		cout << endl;

		switch (opcion){
			case 1:
				//Llamado de la funcion que corre el primer ejercicio
				ejercicio1();
					break;
			case 2:
				//Llamado de la funcion que corre el segundo ejercicio
				ejercicio2();
					break;


			default:
				break;
		}



	} while (opcion != 3);
    
}

