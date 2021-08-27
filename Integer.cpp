#include "Integer.h"

Integer::Integer(){
        entero = 0;
}

Integer::Integer(int valorRecibido){
        entero = valorRecibido;
}
    
int Integer::getValor(){
        return entero;
}

void Integer::operator<<(Integer valorRecibido){
        entero = valorRecibido.getValor();
}

void Integer::operator<<(int valorRecibido){
        entero = valorRecibido;
}

void Integer::operator!(){
        std::cout << entero << std::endl;
}
Integer Integer::operator+(Integer valorRecibido){
        Integer resp;
        int resultadoSuma = entero + valorRecibido.getValor();
        resp << resultadoSuma;
        return resp;
}

Integer Integer::operator-(Integer valorRecibido){
        Integer respuesta;
        int resultadoResta = entero - valorRecibido.getValor();
        respuesta << resultadoResta;
        return respuesta;
}

Integer Integer::operator/(Integer valorRecibido){
        Integer respuesta;
        int resultadoDiv = entero / valorRecibido.getValor();
        respuesta << resultadoDiv;
        return respuesta;
}

Integer Integer::operator*(Integer valorRecibido){
        Integer respuesta;
        int resultadoMult = entero * valorRecibido.getValor();
        respuesta << resultadoMult;
        return respuesta;
}