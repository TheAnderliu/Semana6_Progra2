#include "stdafx.h"



CAvion::CAvion() :CNave()
{
	x = 10;
	y = 10;
	ancho = 11;
	alto = 3;
	color = 13;

}


CAvion::~CAvion()
{
}

void CAvion::Mostrar() {
	Console::SetCursorPosition(x, y);
	Console::ForegroundColor = (ConsoleColor)color;
	cout << "-----------";
	Console::SetCursorPosition(x, y + 1);
	cout << "_\\__(_)__/_";
	Console::SetCursorPosition(x, y + 2);
	cout << "   ./ \\.   ";

}

void CAvion::Borrar() {
	Console::SetCursorPosition(x, y);
	cout << "           ";
	Console::SetCursorPosition(x, y + 1);
	cout << "           ";
	Console::SetCursorPosition(x, y + 2);
	cout << "           ";

}
