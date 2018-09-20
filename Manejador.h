#pragma once
class CManejador
{
private:
	CAvioneta * obj1; 
	CAvion * obj2;

public:
	CManejador();
	~CManejador();

	void Mostrar(int opc);
	void Borrar(int opc);
	void Mover(int opc);
};

