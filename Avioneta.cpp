#include "stdafx.h"



CAvioneta::CAvioneta(int _x, int _y):CNave()
{
	x = _x;
	y = _y;
	ancho = 11;
	alto = 3;
	color = 10;

}


CAvioneta::~CAvioneta()
{
}

void CAvioneta::Mostrar(){
	Console::SetCursorPosition(x, y);
	Console::ForegroundColor = (ConsoleColor)color;
	cout << "-----------";
	Console::SetCursorPosition(x, y+1);
	cout << "_\\__(_)__/_";
	Console::SetCursorPosition(x, y+2);
	cout << "   ./ \\.   ";

}

void CAvioneta::Borrar(){
	Console::SetCursorPosition(x, y);
	cout << "           ";
	Console::SetCursorPosition(x, y + 1);
	cout << "           ";
	Console::SetCursorPosition(x, y + 2);
	cout << "           ";

}
