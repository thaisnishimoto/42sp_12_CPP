/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <thaismnishimoto@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:40:45 by tmina-ni          #+#    #+#             */
/*   Updated: 2024/11/05 00:30:54 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#define RESET   "\033[0m"
#define YELLOW  "\033[33m"

#include <stack>

template <typename T, typename Container = std::deque<T>>
class	MutantStack : public std::stack<T> {

public:
	MutantStack();
	MutantStack(const MutantStack& src);
	MutantStack&	operator=(const MutantStack& rhs);
	~MutantStack();

	typedef typename std::stack<T, Container>::container_type::iterator	iterator;
	iterator	begin();
	iterator	end();

	typedef typename std::stack<T, Container>::container_type::const_iterator	const_iterator;
	const_iterator	begin()i const;
	const_iterator	end() const;

	typedef typename std::stack<T, Container>::container_type::reverse_iterator	reverse_iterator;
	reverse_iterator	rbegin();
	reverse_iterator	rend();

	typedef typename std::stack<T, Container>::container_type::const_reverse_iterator	const_reverse_iterator;
	const_reverse_iterator	rbegin() const;
	const_reverse_iterator	rend() const;
};

#endif
