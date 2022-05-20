/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 08:10:47 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/20 07:11:21 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
	const static int	nb_fract_bit = 0x8;
	int					raw_bits;

public:
	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed(void);

	Fixed(const int n);
	Fixed(const float f);

	Fixed	&operator=(Fixed const &rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &f);

#endif
