/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:19:28 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/29 23:33:48 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DATA_HPP__
#define __DATA_HPP__

struct Data
{
		int	value;
		
		Data();
		Data(int value);
		Data(const Data &d);
		~Data();

		const Data	&operator =(const Data &d);
};

#endif