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
	int getCapacity(Vector v2)const;
	int getSize(Vector v2)const;
	void print(Vector v2);
	Vector& assign(const Vector& num);
	bool operator== (const Vector& v3) const;
	int& at(int index);
};

