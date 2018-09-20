#include "stdafx.h"



CManejador::CManejador()
{
	obj1 = new CAvioneta(5, 8);

	obj2 = new CAvion();
}


CManejador::~CManejador()
{
}


void CManejador::Mostrar(int opc){
	if (opc==1){obj1->Mostrar();}
	if (opc == 2) { obj2->Mostrar(); }
}

void CManejador::Borrar(int opc){
	if (opc == 1) { obj1->Borrar(); }
	if (opc == 2) { obj2->Borrar(); }
}

void CManejador::Mover(int opc){
	if (opc == 1) { obj1->Mover(); }
	if (opc == 2) { obj2->Mover(); }

}