/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:39:21 by yena              #+#    #+#             */
/*   Updated: 2023/06/12 08:03:38 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP01_EX03_HUMANA_HPP_
#define CPP01_EX03_HUMANA_HPP_

#include "Weapon.hpp"
#include <iostream>

/**
 * @brief HumanA class
 */
class HumanA {
 private:
  std::string _name; ///< HumanA's name
  Weapon &_weapon; ///< HumanA's weapon

 public:
  HumanA(std::string name, Weapon &weapon);
  HumanA(const HumanA &object);
  HumanA &operator=(const HumanA &object);
  ~HumanA();
  void attack();
  const std::string &getName() const;
  const Weapon &getWeapon() const;
};

#endif //CPP01_EX03_HUMANA_HPP_
