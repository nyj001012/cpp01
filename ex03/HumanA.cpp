/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:39:21 by yena              #+#    #+#             */
/*   Updated: 2023/06/07 21:30:06 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, weapon &weapon) {
  this->_name = name;
  this->_weapon = weapon;
}

HumanA::HumanA(const HumanA &object) {

}

HumanA::HumanA &operator=(const HumanA &object) {

}

HumanA::~HumanA(void) {

}

/**
 * @brief Set the Weapon object.
 */
void HumanA::attack(void) {
  std::cout << this->_name << "attacks with his "
            << this->_weapon.getType() << std::endl;
}
