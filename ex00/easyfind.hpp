/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:49:21 by huidris           #+#    #+#             */
/*   Updated: 2026/01/01 01:38:48 by huidris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <exception>

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator ret;

	ret = std::find(container.begin(), container.end(), value);
	if (ret == container.end())
		throw std::runtime_error("Value not found in the container");
	return ret;
}

#endif
