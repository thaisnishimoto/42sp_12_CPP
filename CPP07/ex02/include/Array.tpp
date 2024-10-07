#ifndef ARRAY_TPP
#define ARRAY_TPP

#include <iostream>
#include <stdexcept>

template <typename T>
Array<T>::Array() : _elements(NULL), _size(0)
{
	std::cout << "Default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _elements(NULL), _size(n)
{
	std::cout << "Parameterized constructor called" << std::endl;
	if (_size > 0)
		_elements = new T[n](); //initialize by default
}

template <typename T>
Array<T>::Array(const Array& src) : _elements(NULL), _size(src._size)
{
	std::cout << "Copy constructor called" << std::endl;
	if (src._elements)
	{
		_elements = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_elements[i] = src._elements[i];
	}
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		delete [] _elements;
		_size = rhs._size;
		_elements = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_elements[i] = rhs._elements[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "Destructor called" << std::endl;
	delete [] _elements;
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return this->_size;
}

template <typename T>
T&	Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw std::out_of_range("Index is out of bounds"); 
	return _elements[i];
}

template <typename T>
const T&	Array<T>::operator[](unsigned int i) const
{
	if (i >= _size)
		throw std::out_of_range("Index is out of bounds"); 
	return _elements[i];
}

#endif
