/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:39:58 by yena              #+#    #+#             */
/*   Updated: 2023/06/07 21:28:24 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP01_EX03_HUMANB_HPP_
#define CPP01_EX03_HUMANB_HPP_

#include "Weapon.hpp"

/**
 * @brief HumanB class
 */
class HumanB {
 private:
  std::string _name; ///< HumanB's name
  Weapon &_weapon; ///< HumanB's weapon

 public:
  HumanB(std::string name);
  HumanB(const HumanB &object);
  HumanB &operator=(const HumanB &object);
  ~HumanB(void);
  void attack(void);
}

#endif //CPP01_EX03_HUMANB_HPP_
