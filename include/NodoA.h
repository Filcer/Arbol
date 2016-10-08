#include <iostream>
#include <vector>

class NodoA
{
public:
	NodoA* Hijos; //esto es un vector con nodos
	NodoA * Padre;
	NodoA(int dato);
	NodoA(int dato , NodoA* padre);
};
