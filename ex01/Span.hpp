/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:49:21 by huidris           #+#    #+#             */
/*   Updated: 2026/01/11 19:05:57 by huidris          ###   ########.fr       */
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

		template <typename iterator>
		void addNumbers(iterator begin, iterator end)
		{
			if ((_num.size() + std::distance(begin, end)) > _N)
				throw std::runtime_error ("Not enough space to put all num.");
			_num.insert(_num.end(), begin, end);
		}
		unsigned int shortestSpan();
		unsigned int longestSpan();
};

#endif
