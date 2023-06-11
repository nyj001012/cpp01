/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:39:58 by yena              #+#    #+#             */
/*   Updated: 2023/06/12 08:09:55 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
}

HumanB::HumanB(const HumanB &object): _name(object._name), _weapon(object._weapon) {
}

HumanB &HumanB::operator=(const HumanB &object) {
  if (this != &object) {
    this->_name = object.getName();
    this->_weapon = object.getWeapon();
  }
  return (*this);
}

HumanB::~HumanB(void) {

}

/**
 * @brief Print attack message.
 */
void HumanB::attack(void) {
  std::cout << this->_name << " attacks with his "
            << this->_weapon->getType() << std::endl;
}

/**
 * @brief Set the Weapon object.
 */
void HumanB::setWeapon(Weapon &weapon) {
  this->_weapon = &weapon;
}

/**
 * @brief Get the Name object.
 * @return const std::string
 */
const std::string HumanB::getName() const {
  return (this->_name);
}

/**
 * @brief Get the Weapon object.
 * @return Weapon *
 */
Weapon *HumanB::getWeapon() const {
  return (this->_weapon);
}
