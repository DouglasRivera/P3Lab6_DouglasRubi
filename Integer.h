#ifndef INTEGER_H
#define INTEGER_H
#include <string>
#include<iostream>
#include "String.h"
using namespace std;


class Integer {
	private:
		int entero;

	public:
		Integer();
		Integer(int valorRecibido);
		int getValor();
		void operator<<(Integer valorRecibido);
		void operator<<(int valorRecibido);
		void operator!();
		Integer operator+(Integer valorRecibido);
		Integer operator-(Integer valorRecibido);
		Integer operator/(Integer valorRecibido);
		Integer operator*(Integer valorRecibido);

};

#endif