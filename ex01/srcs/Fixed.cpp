/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 08:51:58 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/15 10:33:38 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <cmath>
#include <iostream>
#include <ostream>

Fixed::Fixed() : fixeValue(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int convert_value) {
  std::cout << "Int constructor called" << std::endl;
  fixeValue = convert_value << nb_bits;
}

Fixed::Fixed(const float convert_value) {
  std::cout << "Float constructor called" << std::endl;
  fixeValue = roundf(convert_value * (1 << nb_bits));
}

Fixed::Fixed(const Fixed &other) {
  std::cout << "Copy constructor called" << std::endl;
  *this = other;
}

Fixed &Fixed::operator=(const Fixed &other) {
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &other) {
    this->fixeValue = other.fixeValue;
  }
  return *this;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

int Fixed::getRawBits(void) {
  std::cout << "getRawBits member function called" << std::endl;
  return this->fixeValue;
}

void Fixed::setRawBits(int const raw) { this->fixeValue = raw; }

float Fixed::toFloat(void) const {
  return static_cast<float>(fixeValue) / (1 << nb_bits);
}

int Fixed::toInt(void) const { return fixeValue >> nb_bits; }

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
  out << fixed.toFloat();
  return out;
}
