/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:36:05 by yena              #+#    #+#             */
/*   Updated: 2023/06/07 13:43:27 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Constructor of Zombie class
 * @param name
 */
Zombie::Zombie(std::string name) {
  this->_name = name;
}

/**
 * @brief Default constructor of Zombie class
 */
Zombie::Zombie(void) {

}

/**
 * @brief Destructor of Zombie class
 */
Zombie::~Zombie(void) {
  std::cout << this->_name << " is dead" << std::endl;
}

/**
 * @brief Announce the Zombie's name
 * @return void
 */
void  Zombie::announce(void) {
  std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void  Zombie::setName(std::string name) {
  this->_name = name;
}
