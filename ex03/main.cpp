/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 08:10:49 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/20 07:14:50 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point a(-4, 2);
	Point b(-4, -5);
	Point c(4, 2);

	Point sbeul(98, 1);
	Point h(0.6099218999467f, 2.0f);

	// std::cout << bsp(a, b, c, d) << std::endl;
	// std::cout << bsp(a, b, c, e) << std::endl;
	// std::cout << bsp(a, b, c, f) << std::endl;
	// std::cout << bsp(a, b, c, sbeul) << std::endl;
	std::cout << bsp(a, b, c, h) << std::endl;
}
