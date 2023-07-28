#include <iostream>
using namespace std;

void menu() {
    cout << "---- MENU DE OPCIONES ----\n" << "Opcion 1: Tablero de Ajedrez\n" << "Opcion 2: Raiz n de x\n" ;
}

void ejercicio1() {
	int numtablero;
	cout << "Ingrese un numero: ";
	cin >> numtablero;

	for (size_t i = 0; i < numtablero; i++){
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
	int iteraciones = 0;
	do {
		int x, n;
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
			for (int i = 0; i < iteraciones; i++){
				if (i == 0) {
					min = 1;
					max = x;
					mid = (min + max) /(2);
				}
				else if ((pow(mid,n) > x)) {
					
				}
				else if (pow(mid, n) < x) {

				} else if

			}
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
				ejercicio1();
					break;
			case 2:

				break;


			default:
				break;
		}



	} while (opcion != 3);
    
}

