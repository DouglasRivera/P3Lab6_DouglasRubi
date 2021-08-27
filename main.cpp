#include <iostream>
#include <string>
#include "Integer.h"
#include "String.h"
#include "Char.h"
#include <vector>
using namespace std;

int menu();

int main() {
	int opcion;
	while((opcion = menu()) != 10) {
		switch (opcion) {
			case 1: {
				
				break;
			}
			case 2: {
				
				break;
			}
			case 3: {
				
				break;
			}
			case 4: {
					
				break;
			}
			case 5: {
				    
				break;
			}
			case 6: {

				break;
			}
			case 7: {
				    
				break;
			}
			case 8: {
				
				break;
			}
			case 9: {
				

				break;
			}
			case 10: {
				cout<< "Saliendo del programa...."<<endl;
				
				break;
			}
			
		}//fin del switch
	}//fin while menu
	return 0;
}
int menu() {
	int opcion;
	cout << "----MENU----" << endl;
	cout << "1. Agregar Integer" << endl;
	cout << "2. Agregar Char" << endl;
	cout << "3. Agregar String " << endl;
	cout << "4. Sumar Integer" << endl;
	cout << "5. Restar Integer" << endl;
	cout << "6. Multiplicar Integer " << endl;
	cout << "7. Dividir Integer" << endl;
	cout << "8. Operacion Char " << endl;
	cout << "9. Operacion String " << endl;
	cout << "10. Salir " << endl;
	cout << endl;
	cout << "Ingrese la opcion: ";
	cin >> opcion;
	cout << endl;
	while(opcion < 1 || opcion > 10) {
		cout << "Seleccione una opcion dentro del rango disponible" << endl;
		cout << "Ingrese la opcion: ";
		cin >> opcion;
		cout << endl;
	}
	return opcion;
}