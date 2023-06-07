/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:36:05 by yena              #+#    #+#             */
/*   Updated: 2023/06/07 13:06:13 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP01_ZOMBIE_HPP
#define CPP01_ZOMBIE_HPP

# include <iostream>

/**
 * @brief Zombie class
 */
class Zombie {
 private:
  std::string name; ///> Zombie's name

 public:
  Zombie(std::string name);
  ~Zombie();
  void announce();
};

#endif //CPP01_ZOMBIE_HPP
