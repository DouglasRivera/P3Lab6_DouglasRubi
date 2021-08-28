#include <iostream>
#include <string>
#include "Integer.h"
#include "String.h"
#include "Char.h"
#include <vector>
using namespace std;

int menu();

void ListarNumeros(vector<Integer*> ListarNum){
	for(int i=0; i<ListarNum.size();i++){
		cout<<i<<"->";
		!*ListarNum[i];
		cout<<endl;
	}
}
void ListarChars(vector<Char*> ListarChar){
	for(int i=0; i<ListarChar.size();i++){
		cout<<i<<"->";
		!*ListarChar[i];
		cout<<endl;
	}
}
void ListarCadenas(vector<String*> ListarCad){
	for(int i=0; i<ListarCad.size();i++){
		cout<<i<<"->";
		!*ListarCad[i];
		cout<<endl;
	}
}
void MemoriaNumeros(vector<Integer*>& Numeros){
	for(int i=0; i<Numeros.size();i++){
		if(Numeros[i] !=NULL){
		delete Numeros[i];	
		}
	}
}
void MemoriaChars(vector<Integer*>& Chars){
	for(int i=0; i<Chars.size();i++){
		if(Chars[i] !=NULL){
		delete Chars[i];	
		}
	}
}
void MemoriaCad(vector<Integer*>& Cadenas){
	for(int i=0; i<Cadenas.size();i++){
		if(Cadenas[i] !=NULL){
		delete Cadenas[i];	
		}
	}
}
int main() {
	vector<String*> cadena;
	vector<Integer*> integer;
	vector<Char*> cha;
	int opcion;
	while((opcion = menu()) != 10) {
		switch (opcion) {
			case 1: {
				int i;
				cout << endl << "Integer que desea agregar: " << endl;
				cin >> i;
				Integer *in = new Integer(i);
				integer.push_back(in);
				cout << endl <<"INTEGER agregado correctamente" << endl;
				break;
			}
			case 2: {
				char c;
				cout << endl << "Char que desea agregar: " << endl;
				cin >> c;
				Char *charr = new Char(c);
				cha.push_back(charr);
				cout << endl <<"Char agregado correctamente" << endl;
				break;
			}
			case 3: {
				string s;
				cout << endl << "String que desea agregar: " << endl;
				cin>>s;
				String *strin = new String(s);
				cadena.push_back(strin);
				cout << endl <<"String agregado correctamente" << endl;
				break;
			}
			case 4: {
				int a;
				int b;
				ListarNumeros(integer);
				cout <<"Seleccionar los indices de los numeros: " << endl;
				cin>>a;
				cin>>b;
				*integer[a] + *integer[b];
				break;
			}
			case 5: {
				int a;
				int b;
				ListarNumeros(integer);
				cout <<"Seleccionar los indices de los numeros: " << endl;
				cin>>a;
				cin>>b;
				*integer[a] - *integer[b];
				break;
			}
			case 6: {
				int a;
				int b;
				ListarNumeros(integer);
				cout <<"Seleccionar los indices de los numeros: " << endl;
				cin>>a;
				cin>>b;
				*integer[a] * *integer[b];
				break;
			}
			case 7: {
				int a;
				int b;
				ListarNumeros(integer);
				cout <<"Seleccionar los indices de los numeros: " << endl;
				cin>>a;
				cin>>b;
				*integer[a] / *integer[b];
				break;
			}
			case 8: {

				break;
			}
			case 9: {
			    int a;
				int b;
				ListarChars(cha);
				cout <<"Seleccionar los indices de los chars: " << endl;
				cin>>a;
				cin>>b;
			    String result = *cha[a] + *cha[b];
			    cout <<result.getString() << endl;
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
