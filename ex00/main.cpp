/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:16:08 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/29 23:12:32 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
// #include <sstream>
#include <limits>
#include <cstdlib>
#include <cmath>

static void printas_char(double raw)
{
	std::cout << "char: ";
	if (std::isnan(raw) || not std::isfinite(raw))
		std::cout << "impossible";
	else if (32 <= raw && raw <= 126)
		std::cout << '\'' << static_cast<char>(raw) << '\'';
	else
		std::cout << "Non displayable";
	std::cout << std::endl;
}

static void	printas_int(double raw)
{
	int	val = static_cast<int>(raw);
	
	std::cout << "int: ";
	if ((std::isnan(raw) || not std::isfinite(raw)) || 
		(std::numeric_limits<int>::max() < raw || raw < std::numeric_limits<int>::min()))
		std::cout << "impossible";
	else
		std::cout << val;
	std::cout << std::endl;
}

// static bool	isNaN

static void	printas_float(double raw)
{
	std::cout << "float: ";
	std::cout << std::fixed << static_cast<float>(raw);
	std::cout << 'f' << std::endl;
}

static void	printas_double(double raw)
{
	std::cout << "double: ";
	std::cout << std::fixed << raw;
	std::cout << std::endl;
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage: " << argv[0] << " [data_to_convert]" << std::endl;
		return (1);
	}

	std::cout.precision(1);
	double	draw;
	char	*cp;
	draw = std::strtod(argv[1], &cp);
	// std::stringstream	ss;

	// ss << argv[1];
	// double draw;
	// ss >> draw;
	if (!draw && std::string(argv[1]).size() == 1 && argv[1][0] != '0')
		draw = static_cast<double>(argv[1][0]);
	// std::cout.precision(32);
	
	printas_char(draw);
	printas_int(draw);
	printas_float(draw);
	printas_double(draw);

	return (0);
}
