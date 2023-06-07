/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:39:21 by yena              #+#    #+#             */
/*   Updated: 2023/06/07 21:28:07 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP01_EX03_HUMANA_HPP_
#define CPP01_EX03_HUMANA_HPP_

#include "Weapon.hpp"

/**
 * @brief HumanA class
 */
class HumanA {
 private:
  std::string _name; ///< HumanA's name
  Weapon &_weapon; ///< HumanA's weapon

 public:
  HumanA(Weapon &weapon, std::string name);
  HumanA(const HumanA &object);
  HumanA &operator=(const HumanA &object);
  ~HumanA();
  void attack();
}

#endif //CPP01_EX03_HUMANA_HPP_
