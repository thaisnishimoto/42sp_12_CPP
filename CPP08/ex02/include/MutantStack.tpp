#ifndef MUTANT_STACK_TPP
#define MUTANT_STACK_TPP

template <typename T, typename Container = std::deque<T>>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>()
{
    std::cout << "MutantStack default constructor called" << std::endl;
}

template <typename T, typename Container = std::deque<T>>
MutantStack<T, Container>::MutantStack(const MutantStack& src) : std::stack<T, Container>(src)
{
    std::cout << "MutantStack copy constructor called" << std::endl;
}

template <typename T, typename Container = std::deque<T>>
MutantStack&	MutantStack<T, Container>::operator=(const MutantStack& rhs)
{
	if (this != &rhs)
	{
		std::stack<T, Container>::operator=(rhs);
	}
	return *this;
}

template <typename T, typename Container = std::deque<T>>
MutantStack<T, Container>::~MutantStack()
{
    std::cout << "MutantStack destructor called" << std::endl;
}

template <typename T, typename Container = std::deque<T>>
MutantStack<T, Container>::iterator	begin()
{
}

template <typename T, typename Container = std::deque<T>>
MutantStack<T, Container>::iterator	end()
{
}

template <typename T, typename Container = std::deque<T>>
MutantStack<T, Container>::const_iterator	begin()i const
{
}

template <typename T, typename Container = std::deque<T>>
MutantStack<T, Container>::const_iterator	end() const
{
}

template <typename T, typename Container = std::deque<T>>
MutantStack<T, Container>::reverse_iterator	rbegin()
{
}

template <typename T, typename Container = std::deque<T>>
MutantStack<T, Container>::reverse_iterator	rend()
{
}

template <typename T, typename Container = std::deque<T>>
MutantStack<T, Container>::const_reverse_iterator	rbegin() const
{
}

template <typename T, typename Container = std::deque<T>>
MutantStack<T, Container>::const_reverse_iterator	rend() const
{
}

#endif
