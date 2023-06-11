/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:37:53 by yena              #+#    #+#             */
/*   Updated: 2023/06/12 08:10:13 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
}

Weapon::Weapon(const Weapon &object) : _type(object._type) {
}

Weapon &Weapon::operator=(const Weapon &object) {
  if (this != &object) {
    this->_type = object.getType();
  }
  return (*this);
}

Weapon::~Weapon(void) {
}

/**
 * @brief Get the Type object.
 * @return std::string
 */
const std::string &Weapon::getType() const {
  return (this->_type);
}

/**
 * @brief Set the Type object.
 * @param type
 */
void Weapon::setType(std::string type) {
  this->_type = type;
}
