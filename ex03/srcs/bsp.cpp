/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:12:08 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/18 15:34:45 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
  Fixed X1 = a.getX();
  Fixed Y1 = a.getY();
  Fixed X2 = b.getX();
  Fixed Y2 = b.getY();
  Fixed X3 = c.getX();
  Fixed Y3 = c.getY();
  Fixed Xp = point.getX();
  Fixed Yp = point.getY();

  Fixed DetT = (X2 - X1) * (Y3 - Y1) - (X3 - X1) * (Y2 - Y1);

  Fixed L1 = ((X2 - Xp) * (Y3 - Yp) - (X3 - Xp) * (Y2 - Yp)) / DetT;
  Fixed L2 = ((X3 - Xp) * (Y1 - Yp) - (X1 - Xp) * (Y3 - Yp)) / DetT;
  Fixed L3 = Fixed(1) - L1 - L2;

  return (L1 > Fixed(0) && L1 < Fixed(1)) && (L2 > Fixed(0) && L2 < Fixed(1)) &&
         (L3 > Fixed(0) && L3 < Fixed(1));
}
