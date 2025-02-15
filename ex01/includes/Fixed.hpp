/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 08:51:48 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/15 10:38:52 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <ostream>

class Fixed {
private:
  int fixeValue;
  static const int nb_bits = 8;

public:
  Fixed();
  Fixed(const int convert_value);
  Fixed(const float convert_value);
  Fixed(const Fixed &other);
  Fixed &operator=(const Fixed &other);
  ~Fixed();

  int getRawBits(void);
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
