// SEMANA6_PROGRA2.cpp : main project file.

#include "stdafx.h"



int main()
{
	CAvioneta * obj1 = new CAvioneta(5,20);
	CAvion* obj2 = new CAvion();
	while (1)
	{
		obj1->Mostrar(); obj2->Mostrar();
		_sleep(50);
		obj1->Borrar(); obj2->Borrar();
		obj1->Mover(); obj2->Mover();


	}



    return 0;
}
