/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 08:10:45 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/20 07:11:36 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->raw_bits = 0;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->raw_bits = n << nb_fract_bit;
	return ;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->raw_bits = std::roundf(f * (1 << this->nb_fract_bit));
}

float	Fixed::toFloat(void) const
{
	return (float)getRawBits() / (1 << this->nb_fract_bit);
}

int		Fixed::toInt(void) const
{
	return (this->raw_bits >> nb_fract_bit);
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->raw_bits = rhs.getRawBits();
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &f)
{
	return (o << f.toFloat());
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return this->raw_bits;
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->raw_bits = raw;
}
