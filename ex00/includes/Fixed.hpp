/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 08:51:48 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/13 09:29:06 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
private:
  int fixeValue;
  static const int nb_bits = 8;

public:
  Fixed();
  Fixed(const Fixed &other);
  Fixed &operator=(const Fixed &other);
  ~Fixed();
  int getRawBits(void);
  void setRawBits(int const raw);
};

#endif
