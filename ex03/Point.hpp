/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 08:13:10 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/20 07:15:13 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <string>
#include "Fixed.hpp"

class Point
{
private:
	Fixed	x;
	Fixed	y;

public:
	Point(void);
	Point(Point const &src);
	Point(float const x, float const y);
	~Point(void);

	Point    &operator=(Point const &rhs);

	Fixed	getX(void) const;
	Fixed	getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
