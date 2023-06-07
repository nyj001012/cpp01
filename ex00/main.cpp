/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:37:16 by yena              #+#    #+#             */
/*   Updated: 2023/06/07 12:57:56 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void randomChump(std::string name);

int main(void)
{
    Zombie *zombie;

    zombie = new Zombie("Heap Zombie");
    zombie->announce();
    delete zombie;
    randomChump("Stack Zombie");
    return (0);
}
