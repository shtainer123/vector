#pragma once
class Vector
{
	int* data;
	int	capacity;
	int	size;
public:
	Vector(int _capacity = 2);
	Vector(const Vector& v1);
	~Vector();
	void setCapacity(int myCapacity);
	void setSize(int mySize);
	int getCapacity()const;
	int getSize()const;
	void print();
	void assign(const Vector& num);
	bool operator== (const Vector& v3) const;
	int& at(int index);
};
