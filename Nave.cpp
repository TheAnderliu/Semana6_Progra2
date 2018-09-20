#include "stdafx.h"



CNave::CNave()
{
	x = 5;
	dx = 1;
	dy = 0;
}



void CNave::Mover() {

	if (x+dx<0||x+dx+ancho>79)
	{
		//dx = dx*-1 ;
		dx *= -1;
	}
	x += dx;


}
