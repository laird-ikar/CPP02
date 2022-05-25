/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 08:10:45 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/25 14:21:59 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

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

	Fixed				&operator=(Fixed const &rhs);
	Fixed				&operator++(void);
	Fixed				&operator--(void);
	Fixed				operator++(int);
	Fixed				operator--(int);
	bool				operator>(Fixed const &f);
	bool				operator<(Fixed const &f);
	bool				operator>=(Fixed const &f);
	bool				operator<=(Fixed const &f);
	bool				operator==(Fixed const &f);
	bool				operator!=(Fixed const &f);
	Fixed				operator+(Fixed const &f);
	Fixed				operator-(Fixed const &f);
	Fixed				operator*(Fixed const &f);
	Fixed				operator/(Fixed const &f);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;
	static Fixed		&min(Fixed &f1, Fixed &f2);
	static Fixed		&max(Fixed &f1, Fixed &f2);
	static const Fixed	&min(const Fixed &f1, const Fixed &f2);
	static const Fixed	&max(const Fixed &f1, const Fixed &f2);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &f);

#endif
