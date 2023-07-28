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

			default:
				break;
		}



	} while (opcion != 3);
    
}

