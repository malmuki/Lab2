#include "dynamicArray.h"

DynamicArray::DynamicArray(const unsigned int _capacite)
{
	capacite = _capacite;
	tabElements = new int[_capacite] {};
}

int DynamicArray::getCapacite() const
{
	return capacite;
}

int DynamicArray::getElement(const unsigned i)
{
	return tabElements[i];
}

void DynamicArray::setElement(const unsigned _index_element, const int _nouvelle_valeur_element)
{
	tabElements[_index_element] = _nouvelle_valeur_element;
}