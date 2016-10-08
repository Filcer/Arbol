#include "NodoA.h"

NodoA::NodoA(int pzl)
{
	this->Puzzel = pzl;
	this->Padre = NULL;
}

NodoA::NodoA(int pzl , NodoA* padre)
{
	this->Puzzel = pzl;
	this->Padre = padre;
}
