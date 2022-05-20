/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 08:13:18 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/20 07:14:24 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float det (Point p1, Point p2, Point p3)
{
	float f;

	f = (p1.getX().toFloat() - p3.getX().toFloat()) * (p2.getY().toFloat() - p3.getY().toFloat()) - (p2.getX().toFloat() - p3.getX().toFloat()) * (p1.getY().toFloat() - p3.getY().toFloat());
    return (f);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float d1, d2, d3;
    bool has_neg, has_pos;

    d1 = det(point, a, b);
    d2 = det(point, b, c);
    d3 = det(point, c, a);

	// std::cout << d1 << std::endl << d2 << std::endl << d3 << std::endl << std::endl;

    has_neg = (d1 <= 0) || (d2 <= 0) || (d3 <= 0);
    has_pos = (d1 >= 0) || (d2 >= 0) || (d3 >= 0);

    return !(has_neg && has_pos);
}
