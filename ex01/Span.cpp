/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:49:21 by huidris           #+#    #+#             */
/*   Updated: 2026/01/11 19:09:24 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0){}

Span::Span(unsigned int N) : _N(N){}

Span::Span(const Span &other) : _N(other._N), _num(other._num) {}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_N = other._N;
		_num = other._num;
	}
	return *this;
}

Span::~Span(){}

void Span::addNumber(int Num)
{
	if (_num.size() >= _N)
		throw std::runtime_error ("No more space to put num.");
	_num.push_back(Num);
}

unsigned int Span::shortestSpan()
{
	if (_num.size() < 2)
		throw std::runtime_error ("No span exist");

	std::vector<int> tmp = _num;
	std::sort(tmp.begin(), tmp.end());

	int minSpan = tmp[1] - tmp[0];
	for(unsigned int i = 0; i < _num.size() - 1; i++)
	{
		int diff = tmp[i + 1] - tmp[i];
		if (diff < minSpan)
			minSpan = diff;
	}
	return minSpan;
}

unsigned int Span::longestSpan()
{
	if (_num.size() - 1 < 2)
		throw std::runtime_error ("No span exist");

	std::vector<int> tmp = _num;
	std::sort(tmp.begin(), tmp.end());

	return tmp[tmp.size() - 1] - tmp[0];
}
