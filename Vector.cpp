#include "Vector.h"
#include <iostream>
using namespace std;


Vector::Vector(int _capacity=2)
{
	size = 0;
	capacity = _capacity;
	data = new int[_capacity];
	
	//while (size != _capacity) {         //As long as the values are not equal, the loop promotes size
	//	size++;
	//}
	//*data = 2 * _capacity; 
}

Vector::Vector(const Vector& v1)
{
	size = v1.size;
	capacity = v1.capacity;
	data = new int[v1.capacity];
}

Vector::~Vector()
{
	if (data) 
		delete data;
	date = NULL;
}

void Vector::setCapacity(int myCapacity)
{
	capacity = myCapacity;
}

void Vector::setSize(int mySize)
{
	size = mySize;
}

int Vector::getCapacity()const
{

	return capacity;
	
}

int Vector::getSize()const
{
	return size;
}

void Vector::print(Vector v2)
{
	cout << "capacity:" << getCapacity(v2) << "size:" << getSize(v2) << "values:";
	for (int i = 0; i < size; i++) {
		cout << *(data+i);
	}
}

void Vector::assign(const Vector& v3)
{
	capacity = v3.getCapacity();
	size = v3.getSize();
	delete data;
	data = new int[capacity];
	data = v3.data;
	// TODO: insert return statement here
}


bool Vector::operator==(const Vector& v3) const
{
	return ((size==v3.size)&&(data==v3.data));
}

int& Vector::at(int index)
{
	if ((index < 0) && (index > size - 1)) {
		cout << "ERROR";
		int x= data[0];
		return x;
	}
	// TODO: insert return statement here
}
 
