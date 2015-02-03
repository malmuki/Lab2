#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_

class DynamicArray
{
public:
	DynamicArray(unsigned int _capacite = 100);
	int getCapacite() const;
	int getElement(const int _i) const ;
	void setElement(const unsigned int _index_element, const int _nouvelle_valeur_element);
	void setCapacite(const unsigned int _nouvelle_capacite);

private:
	int* tabElements;
	unsigned int capacite;
};

#endif //DYNAMICARRAY_H_