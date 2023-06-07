/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:36:05 by yena              #+#    #+#             */
/*   Updated: 2023/06/07 13:06:17 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Constructor of Zombie class
 * @param name
 */
Zombie::Zombie(std::string name) {
  this->name = name;
}

/**
 * @brief Destructor of Zombie class
 */
Zombie::~Zombie() {
  std::cout << this->name << " is dead" << std::endl;
}

/**
 * @brief Announce the Zombie's name
 * @return void
 */
void  Zombie::announce() {
  std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
