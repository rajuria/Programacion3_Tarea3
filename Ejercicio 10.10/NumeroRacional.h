#pragma once
#include <iostream>
#ifndef NUMERORACIONAL_H
#define NUMERORACIONAL_H
#endif
using namespace std;

class NumeroRacional
{
public:
	NumeroRacional(int Numerador, int Denominador)
	{
		if (Denominador == 0) 
		{
			cout << "Denominador 0. Indefinido.";
			exit(0);
		}
		if (Denominador < 0)
		{
			cout << "Denominador Negativo. El programa no puede calcular denominadores negativos.";
			exit(0);
		}
		//Por medio de "Brute Force" se intenta encontrar el maximo comun divisor de ambos numeros.
		//Muy posiblemente haya una manera mas eficiente, pero esta es la mas rapida de programar c:
		for (int i = Denominador * Numerador; i > 1; i--)
		{
			if ((Denominador % i == 0) && (Numerador % i == 0))
			{
				Denominador /= i;
				Numerador /= i;
			}
		}
	}

	NumeroRacional operator+(const NumeroRacional&);
	NumeroRacional operator-(const NumeroRacional&);
	NumeroRacional operator*(const NumeroRacional&);
	NumeroRacional operator/(const NumeroRacional&);

	NumeroRacional operator>(const NumeroRacional&);
	NumeroRacional operator<(const NumeroRacional&);
	NumeroRacional operator>=(const NumeroRacional&);
	NumeroRacional operator<=(const NumeroRacional&);
	NumeroRacional operator==(const NumeroRacional&);
};

