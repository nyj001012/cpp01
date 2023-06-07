/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:37:28 by yena              #+#    #+#             */
/*   Updated: 2023/06/07 12:44:15 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Create a Zombie object without dynamic allocation
 *        and announce it.
 * @param name
 */
void randomChump(std::string name) {
  Zombie zombie(name);
  zombie.announce();
}
