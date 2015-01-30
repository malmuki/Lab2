#include "dynamicArray.h"

DynamicArray::DynamicArray(unsigned _capacite)
{
	capacite = _capacite;
}

int DynamicArray::getCapacite() const
{
	return capacite;
}