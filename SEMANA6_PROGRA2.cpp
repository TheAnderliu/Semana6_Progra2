// SEMANA6_PROGRA2.cpp : main project file.

#include "stdafx.h"

int Menu() {
	int opc;
	cout << "1. Avioneta" << endl;

	cout << "2. Avion" << endl;

	cout << "Ingrese opcion: " << endl;

	cin >> opc;
	return opc;
}

int main()
{
	CManejador * objman = new CManejador();
	int opc = Menu();
	while (1)
	{
		objman->Mostrar(opc);
		_sleep(50);
		objman->Borrar(opc);
		objman->Mover(opc);


	}



    return 0;
}
