#include "dynamicArray.h"
#include <stdexcept>

DynamicArray::DynamicArray(const unsigned int _capacite)
{
	if (_capacite <= 0) throw std::invalid_argument("capaciter invalide");
	capacite = _capacite;
	tabElements = new int[_capacite] {};
}

int DynamicArray::getCapacite() const
{
	return capacite;
}

int DynamicArray::getElement(const int _i) const
{
	if (capacite < _i) throw std::out_of_range("capaciter invalide");

	return tabElements[_i];
}

void DynamicArray::setElement(const unsigned _index_element, const int _nouvelle_valeur_element)
{
	if (_index_element > capacite)
	{
		setCapacite(_index_element);
	}
	tabElements[_index_element] = _nouvelle_valeur_element;
}

void DynamicArray::setCapacite(const unsigned _nouvelle_capacite)
{
	if (_nouvelle_capacite <= 0) throw std::invalid_argument("capaciter invalide");

	int* ancienTab = tabElements;
	tabElements = new int[_nouvelle_capacite] {};
	for (unsigned int i = 0; i < capacite; i++)
	{
		tabElements[i] = ancienTab[i];
	}
	delete[] ancienTab;
	capacite = _nouvelle_capacite;
}