/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:27:29 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/29 23:38:28 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <stdint.h>
#include <iostream>

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main()
{
	Data*	d = new Data(42);
	
	std::cout << "original pointer: " << d << std::endl;
	std::cout << "data's value member: " << d->value << std::endl;

	uintptr_t	serialized = serialize(d);
	Data		*deserialized = deserialize(serialized);

	std::cout << "deserialized pointer: " << deserialized << std::endl;
	std::cout << "deserialized data's value member: " << deserialized->value << std::endl;

	delete d;
	return (0);
}