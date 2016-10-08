#include "Arbol.h"

int main()
{
	int o;
	for (int i = 1; i < 9; ++i)
	{
		o.push_back(i);
	}
	o.push_back('*');
	
	Arbol arbol(o);
	for (int i = 0; i < arbol.Raiz->Puzzel.size() ; ++i)
	{	
		if(arbol.Raiz->Puzzel[i]=='*')
			std::cout<<arbol.Raiz->Puzzel[i]<<std::endl;
		else
			std::cout<<(int)arbol.Raiz->Puzzel[i]<<std::endl;
	}

	int p;
	p.push_back('*');
	for (int i = 1; i < 9; ++i)
	{
		p.push_back(i);
	}
	

	std::cout<<arbol.AddNodo(o,p)<<std::endl;

	return 0;
}
