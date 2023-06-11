/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:37:53 by yena              #+#    #+#             */
/*   Updated: 2023/06/12 08:10:36 by yena             ###   ########.fr       */
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
  std::string _type; ///< weapon type string

 public:
  Weapon(std::string type);
  Weapon(const Weapon &object);
  Weapon &operator=(const Weapon &object);
  ~Weapon();
  const std::string &getType(void) const;
  void setType(std::string type);
};

#endif //CPP01_EX03_WEAPON_H_
