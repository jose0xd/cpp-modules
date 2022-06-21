template <class T>
Array<T>::Array()
	: len(0), list(0)
{
}

template <class T>
Array<T>::Array(unsigned int n)
	: len(n)
{
	list = new T[len]();
}

template <class T>
Array<T>::Array(const Array &other)
	: len(other.len)
{
	list = new T[len]();
	for (unsigned int i = 0; i < len; i++)
		list[i] = other.list[i];
}

template <class T>
Array<T>::~Array()
{
	delete [] list;
}

template <class T>
Array<T>	&Array<T>::operator=(const Array<T> &other)
{
	this->len = other.len;
	list = new T[len]();
	for (unsigned int i = 0; i < len; i++)
		list[i] = other.list[i];
	return (*this);
}

template <class T>
T	&Array<T>::operator[](unsigned int i)
{
	if (i > len)
		throw std::exception();
	return (list[i]);
}

template <class T>
const T	&Array<T>::operator[](unsigned int i) const
{
	if (i > len)
		throw std::exception();
	return (list[i]);
}

template <class T>
unsigned int	Array<T>::size() const { return (len); }
