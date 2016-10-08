#include "NodoA.h"

NodoA::NodoA(int dato)
{
	this->Puzzel = dato;
	this->Padre = NULL;
}

NodoA::NodoA(int dato , NodoA* padre)
{
	this->Puzzel = dato;
	this->Padre = padre;
}
