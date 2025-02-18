/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:56:14 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/18 14:27:25 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point {
private:
  const Fixed x;
  const Fixed y;

public:
  Point();
  Point(const float x, const float y);
  Point(const Point &other);
  Point &operator=(const Point &other);
  ~Point();

  Fixed getX() const;
  Fixed getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
