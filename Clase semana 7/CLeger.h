#ifndef _Cleger_H_
#define _CLeger_H_

#include <iostream>


using namespace std;
using namespace System;

class L1
{
public:
	L1(int VELOCIDAD, int x, int y, int dx);
	~L1() {}

	/////
	int getvelocidad;
	int getx;
	int gety;
	int getdx;

	void setvelocidad() {}
	void setx() {}
	void sety() {}
	void setdx() {}

	void dibujar();
	void mover();
	void borrar();

protected:
	int velocidad;
	int x, y;
	int dx;

};


L1::L1(int VELOCIDAD, int X, int Y, int DX)
{
	velocidad = VELOCIDAD;
	x=X;
	y = Y;
	dx= DX;

}
L1::~L1()
{
}

void L1::dibujar()
{
	Console::SetCursorPosition(x, y);
	cout << "__";
	Console::SetCursorPosition(x, y + 1);
	cout << ".-'--`-._";
	Console::SetCursorPosition(x, y + 2);
	cout << "'-O---O--'";

}
void L1::mover()
{
	x = x + dx;

}
void L1::borrar()
{
	Console::SetCursorPosition(x, y);
	cout << "  ";
	Console::SetCursorPosition(x, y + 1);
	cout << "         ";
	Console::SetCursorPosition(x, y + 2);
	cout << "          ";

}

#endif // !_Cleger_H_

class L2:public L1
{


};

