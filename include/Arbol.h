#include <stack>
#include "NodoA.h"

class Arbol
{
  private:
    NodoA *BusqRec(int ref, NodoA* aux);

  public:
    NodoA* Raiz;
    Arbol(int orig);
    NodoA* BusqNodo(int ref);
    bool AddNodo(int ref, int aux);
    bool ElimNodo(int ref);
    std::stack<NodoA*> Camino(NodoA* aux);
    void Imprimir();

};