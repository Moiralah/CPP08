/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:49:17 by huidris           #+#    #+#             */
/*   Updated: 2026/01/01 01:46:42 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	try
	{
		std::vector<int> v;
		v.push_back(1);
		v.push_back(42);
		v.push_back(3);

		std::vector<int>::iterator it;
		it = easyfind(v, 42);
		std::cout << "Found vector: " << *it << std::endl;

		it = easyfind(v, 2);
		std::cout << "Found vector: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::list<int> l;
		l.push_back(1);
		l.push_back(42);
		l.push_back(3);

		std::list<int>::iterator it;
		it = easyfind(l, 42);
		std::cout << "Found vector: " << *it << std::endl;

		it = easyfind(l, 2);
		std::cout << "Found vector: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
