#include "String.h"

String::String(){
}

String::String(string cadenaRecibida){
        cadena = cadenaRecibida;
}

string String::getString(){
        return cadena;
}

void String::operator<<(String cadenaRecibida){
        cadena = cadenaRecibida.getString();
}

void String::operator<<(string cadenaRecibida){
        cadena = cadenaRecibida;
}

void String::operator!(){
        std::cout << cadena << std::endl;
}

String String::operator*(int cantidadDeRepeticiones){
        string cadenaTemp = "";
        for (int i = 0; i < cantidadDeRepeticiones; i++)
        {
            cadenaTemp += cadena;
        }
        String objetoStringTemp;
        objetoStringTemp << cadenaTemp;
        return objetoStringTemp;
}