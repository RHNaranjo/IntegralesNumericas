#include "Pila.h"

void Pila::push(char caracter)
{
	Nodo* nodo = new Nodo;
	nodo->caracter = caracter;
	nodo->anterior = heap;
	heap = nodo;
}

char Pila::pop()
{
	Nodo* aux = heap;
	heap = heap->anterior;
	char valor = aux->caracter;
	delete (aux);
	return valor;
}
char Pila ::top()
{
	return heap->caracter;
}
int Pila::tamañoPila()
{
	Nodo* aux = heap;
	int cont = 0;
	while (aux != nullptr)
	{
		aux = aux->anterior;
		cont++;
	}
	return cont;
}