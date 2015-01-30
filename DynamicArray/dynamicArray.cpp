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