/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:39:21 by yena              #+#    #+#             */
/*   Updated: 2023/06/12 14:18:27 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :_name(name), _weapon(weapon) {
}

HumanA::HumanA(const HumanA &object) :_name(object._name), _weapon(object._weapon) {
}

HumanA &HumanA::operator=(const HumanA &object) {
  if (this != &object) {
    this->_name = object.getName();
    this->_weapon = object.getWeapon();
  }
  return (*this);
}

HumanA::~HumanA(void) {

}

/**
 * @brief Print attack message.
 */
void HumanA::attack(void) {
  std::cout << this->_name << " attacks with his "
            << this->_weapon.getType() << std::endl;
}

/**
 * @brief Get the Name object.
 * @return const std::string
 */
const std::string &HumanA::getName(void) const {
  return (this->_name);
}

/**
 * @brief Get the Weapon object.
 * @return const Weapon &
 */
const Weapon &HumanA::getWeapon(void) const {
  return (this->_weapon);
}
