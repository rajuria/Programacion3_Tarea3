#pragma once
#ifndef ENTEROENORME_H
#define ENTEROENORME_H
#endif

#include <array>
#include <iostream>
#include <string>


class EnteroEnorme
{
	friend std::ostream& operator<<(std::ostream&, const EnteroEnorme&);
public:
	static const int digitos = 30;

	EnteroEnorme(long = 0);
	EnteroEnorme(const std::string&);

	//operadores Suma +
	EnteroEnorme operator+(const EnteroEnorme&);
	EnteroEnorme operator+(int)const;
	EnteroEnorme operator+(const std::string&) const;

	//operadores Multiplicacion *
	EnteroEnorme operator*(const EnteroEnorme&);
	EnteroEnorme operator*(int)const;
	EnteroEnorme operator*(const std::string&) const;

	//operadores Division /
	EnteroEnorme operator/(const EnteroEnorme&);
	EnteroEnorme operator/(int)const;
	EnteroEnorme operator/(const std::string&) const;

	//operadores Mayor Que >
	EnteroEnorme operator>(const EnteroEnorme&);
	EnteroEnorme operator>(int)const;
	EnteroEnorme operator>(const std::string&) const;

	//operadores Menor Que <
	EnteroEnorme operator<(const EnteroEnorme&);
	EnteroEnorme operator<(int)const;
	EnteroEnorme operator<(const std::string&) const;

	//operadores Igual A ==
	EnteroEnorme operator==(const EnteroEnorme&);
	EnteroEnorme operator==(int)const;
	EnteroEnorme operator==(const std::string&) const;
};

