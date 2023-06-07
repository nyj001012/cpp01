/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:39:58 by yena              #+#    #+#             */
/*   Updated: 2023/06/07 21:44:57 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
  this->_name = name;
  this->_weapon = NULL;
}

HumanB::HumanB(const HumanB &object) {

}
HumanB::HumanB &operator=(const HumanB &object) {

}

HumanB::~HumanB(void) {

}

/**
 * @brief Set the Weapon object.
 */
void HumanB::attack(void) {
  std::cout << this->_name << "attacks with his "
            << this->_weapon.getType() << std::endl;
}

/**
 * @brief Set the Weapon object.
 */
void HumanB::setWeapon(Weapon &weapon) {
  this->_weapon = weapon;
}
