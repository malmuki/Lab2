#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_

class DynamicArray
{
public:
	DynamicArray(unsigned int _capacite = 100);
	int getCapacite() const;
	int getElement(const unsigned int i);
	void setElement(const unsigned int _index_element, const int _nouvelle_valeur_element);

private:
	int* tabElements;
	unsigned int capacite;
};

#endif //DYNAMICARRAY_H_