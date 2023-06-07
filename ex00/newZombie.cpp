/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:36:45 by yena              #+#    #+#             */
/*   Updated: 2023/06/07 12:44:29 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Create a Zombie object with dynamic allocation.
 *        After using this function, you should delete the object.
 * @param name
 * @return
 */
Zombie *newZombie(std::string name)
{
  Zombie *zombie = new Zombie(name);
  return (zombie);
}