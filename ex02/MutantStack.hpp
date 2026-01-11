/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:49:21 by huidris           #+#    #+#             */
/*   Updated: 2026/01/11 23:25:03 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <algorithm>
#include <iostream>
#include <exception>
#include <vector>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {}
		MutantStack(const MutantStack &other) : std::stack<T>(other) {}
		MutantStack &operator=(const MutantStack &other)
		{
			std::stack<T>::operator=(other);
			return *this;
		}

		~MutantStack() {}

		// Iterator types
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		// Iterator access
		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }

		const_iterator begin() const { return this->c.begin(); }
		const_iterator end() const { return this->c.end(); }
};

#endif
