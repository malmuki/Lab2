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

int DynamicArray::getElement(const unsigned _i)
{
	return tabElements[_i];
}

void DynamicArray::setElement(const unsigned _index_element, const int _nouvelle_valeur_element)
{
	tabElements[_index_element] = _nouvelle_valeur_element;
}

void DynamicArray::setCapacite(const unsigned _nouvelle_capacite)
{
	if (_nouvelle_capacite > capacite)
	{
		int* ancienTab = tabElements;
		tabElements = new int[_nouvelle_capacite] {};
		for (int i = 0; i < capacite; i++)
		{
			tabElements[i] = ancienTab[i];
		}
		delete[] ancienTab;
	}
	capacite = _nouvelle_capacite;
}