/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:48:17 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/30 00:04:10 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>

Base * generate(void)
{
	int r = (std::rand() % 3);

	switch (r)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
		default:
			return (0);
	}
}

void	identify(Base* p)
{
	int	id;

	id = 0;
	if (dynamic_cast<A*>(p))
		id = 1;
	else if (dynamic_cast<B*>(p))
		id = 2;
	else if (dynamic_cast<C*>(p))
		id = 3;
	std::cout << "identPTR: ";
	if (id)
		std::cout << static_cast<char>('A' + (id - 1));
	else
		std::cout << "unknown";
	std::cout << std::endl;
}

void	identify(Base& p)
{
	int	id;

	id = 0;
	try
	{
		dynamic_cast<A&>(p);
		id = 1;
	}
	catch (std::exception &e) {(void)e;}
	try
	{
		dynamic_cast<B&>(p);
		id = 2;
	}
	catch (std::exception &e) {(void)e;}
	try
	{
		dynamic_cast<C&>(p);
		id = 3;
	}
	catch (std::exception &e) {(void)e;}
	std::cout << "identREF: ";
	if (id)
		std::cout << static_cast<char>('A' + (id - 1));
	else
		std::cout << "unknown";
	std::cout << std::endl;
}

int	main()
{
	for(int i = 0; i < 10; ++i)
	{
		Base	*b = generate();
		identify(b);
		identify(*b);
		delete b;
	}
	return (0);
}