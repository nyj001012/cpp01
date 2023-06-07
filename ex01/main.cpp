/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:37:16 by yena              #+#    #+#             */
/*   Updated: 2023/06/07 13:22:11 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

  int main(void) {
  Zombie *zombie;
  int n;

  std::cout << "Enter N which is number of Zombie: ";
  std::cin >> n;
  if (std::cin.fail() || n < 1) {
    std::cout << "* invalid input" << std::endl;
    return (1);
  }
  zombie = zombieHorde(n, "yena");
  delete[] zombie;
  return (0);
}
