#ifndef CHAR_H
#define CHAR_H
#include<iostream>
#include "String.h"
using namespace std;

class Char {
	private:
		char caracter;
	public:
		Char();
		Char(char caracterRecibido);
		char getChar();
		void operator<<(Char caracterRecibido);
		void operator<<(char caracterRecibido);
		String operator+(Char caracterRecibido);
		void operator!();
};

#endif