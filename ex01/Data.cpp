/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:25:22 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/29 23:35:55 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(): value(0) {}

Data::Data(int value)
{
	this->value = value;
}

Data::Data(const Data &d): value(0)
{
	*this = d;
}

Data::~Data() {}

const Data	&Data::operator =(const Data &d)
{
	value = d.value;
	return (*this);
}