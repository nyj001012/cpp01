/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:10:57 by yena              #+#    #+#             */
/*   Updated: 2023/06/07 13:45:13 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Create Zombie horde and announce its name
 * @param N number of Zombie
 * @param name name of Zombie
 * @return
 */
Zombie *zombieHorde(int N, std::string name) {
  Zombie *zombies = new Zombie[N];
  for (int i = 0; i < N; i++) {
    zombies[i].setName(name + ":" + std::to_string(i));
    zombies[i].announce();
  }
  return (zombies);
}
