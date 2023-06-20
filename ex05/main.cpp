/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:40:23 by yena              #+#    #+#             */
/*   Updated: 2023/06/12 19:49:14 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
  std::string level;
  Harl Harl;

  while (1) {
    std::cout << "Enter log level: ";
    std::getline(std::cin, level);
    if (level == "EXIT" || level == "")
      break;
    Harl.complain(level);
  }
}
