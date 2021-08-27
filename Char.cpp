#include "Char.h"

Char::Char(){
}

Char::Char(char caracterRecibido){
        caracter = caracterRecibido;
}

char Char::getChar(){
        return caracter;
}

void Char::operator<<(Char caracterRecibido){
        caracter = caracterRecibido.getChar();
}

void Char::operator<<(char caracterRecibido){
        caracter = caracterRecibido;
}

String Char::operator+(Char caracterRecibido){
        String temp;
        string newString;
        newString += caracter;
        newString += caracterRecibido.getChar();
        temp << newString;
        return temp;
}

void Char::operator!(){
        cout << caracter <<endl;
}