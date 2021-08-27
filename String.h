#ifndef STRING_H
#define STRING_H
#include <iostream>
#include <string>


using namespace std;

class String{
	private:
    string cadena;

public:
    string getString();
    void operator<<(String cadenaRecibida);
    void operator<<(string cadenaRecibida);
    void operator!();
    String operator*(int cantidadDeRepeticiones);
};
#endif