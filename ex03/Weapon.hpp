/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:37:53 by yena              #+#    #+#             */
/*   Updated: 2023/06/07 21:55:52 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP01_EX03_WEAPON_HPP_
#define CPP01_EX03_WEAPON_HPP_

#include <iostream>

/**
 * @brief Weapon class
 */
class Weapon {
 private:
  const std::string _type; ///< const reference to weapon type string

 public:
  Weapon(std::string type);
  Weapon(const Weapon &object);
  Weapon &operator=(const Weapon &object);
  ~Weapon();
  std::string getType();
  void setType(std::string type);
};

#endif //CPP01_EX03_WEAPON_H_
