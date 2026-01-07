/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:49:21 by huidris           #+#    #+#             */
/*   Updated: 2026/01/04 23:38:32 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <exception>
#include <vector>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_num;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);

		~Span();

		void addNumber(int Num);
		void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int shortestSpan();
		unsigned int longestSpan();
};

#endif
