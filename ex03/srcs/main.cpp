/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:12:50 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/18 15:44:04 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"
#include <iostream>

int main(void) {
  Point a(0, 0);
  Point b(10, 0);
  Point c(5, 10);

  Point inside(5, 5);
  Point outside(10, 10);
  Point onEdge(5, 0);

  std::cout << "Inside: " << bsp(a, b, c, inside) << std::endl;
  std::cout << "Outside: " << bsp(a, b, c, outside) << std::endl;
  std::cout << "On Edge: " << bsp(a, b, c, onEdge) << std::endl;
  return 0;
}
