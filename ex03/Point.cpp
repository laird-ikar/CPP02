/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 08:13:13 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/25 14:25:40 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
{
	this->x = Fixed(0);
	this->y = Fixed(0);
	return ;
}

Point::Point(float const x, float const y)
{
	this->x = Fixed(x);
	this->y = Fixed(y);
	return ;
}

Point::Point(Point const &src)
{
	*this = src;
	return ;
}

Point &Point::operator=(Point const &rhs)
{
	this->x = rhs.getX();
	this->y = rhs.getY();
	return *this;
}

Point::~Point(void)
{
	return ;
}

Fixed	Point::getX(void) const
{
	return this->x;
}

Fixed	Point::getY(void) const
{
	return this->y;
}
