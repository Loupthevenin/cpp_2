/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 08:51:58 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/15 11:25:19 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <cmath>
#include <iostream>
#include <ostream>

Fixed::Fixed() : fixeValue(0) {}

Fixed::Fixed(const int convert_value) { fixeValue = convert_value << nb_bits; }

Fixed::Fixed(const float convert_value) {
  fixeValue = roundf(convert_value * (1 << nb_bits));
}

Fixed::Fixed(const Fixed &other) { *this = other; }

Fixed &Fixed::operator=(const Fixed &other) {
  if (this != &other) {
    this->fixeValue = other.fixeValue;
  }
  return *this;
}

Fixed::~Fixed() {}

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

bool Fixed::operator>(const Fixed &other) const {
  return fixeValue > other.fixeValue;
}

bool Fixed::operator<(const Fixed &other) const {
  return fixeValue < other.fixeValue;
}

bool Fixed::operator>=(const Fixed &other) const {
  return fixeValue >= other.fixeValue;
}
bool Fixed::operator<=(const Fixed &other) const {
  return fixeValue <= other.fixeValue;
}
bool Fixed::operator==(const Fixed &other) const {
  return fixeValue == other.fixeValue;
}
bool Fixed::operator!=(const Fixed &other) const {
  return fixeValue != other.fixeValue;
}

Fixed Fixed::operator+(const Fixed &other) const {
  Fixed result;

  result.fixeValue = this->fixeValue + other.fixeValue;
  return result;
}

Fixed Fixed::operator-(const Fixed &other) const {
  Fixed result;

  result.fixeValue = this->fixeValue - other.fixeValue;
  return result;
}

Fixed Fixed::operator*(const Fixed &other) const {
  Fixed result;

  result.fixeValue = (this->fixeValue * other.fixeValue) >> nb_bits;
  return result;
}

Fixed Fixed::operator/(const Fixed &other) const {
  Fixed result;

  result.fixeValue = (this->fixeValue << nb_bits) / other.fixeValue;
  return result;
}

Fixed &Fixed::operator++() {
  fixeValue += 1;
  return *this;
}

Fixed Fixed::operator++(int) {
  Fixed temp = *this;
  fixeValue += 1;
  return temp;
}

Fixed &Fixed::operator--() {
  fixeValue -= 1;
  return *this;
}

Fixed Fixed::operator--(int) {
  Fixed temp = *this;
  fixeValue -= 1;
  return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) { return (a < b) ? a : b; }

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
  return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) { return (a > b) ? a : b; }

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
  return (a > b) ? a : b;
}
