/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 19:05:35 by yena              #+#    #+#             */
/*   Updated: 2023/06/12 20:06:07 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
  _levels[0] = "DEBUG";
  _levels[1] = "INFO";
  _levels[2] = "WARNING";
  _levels[3] = "ERROR";
  _printLog[0] = &Harl::debug;
  _printLog[1] = &Harl::info;
  _printLog[2] = &Harl::warning;
  _printLog[3] = &Harl::error;
}

Harl::~Harl(void) {

}

Harl &Harl::operator=(const Harl &Harl) {
  if (this != &Harl) {
    for (int i = 0; i < LEVEL_COUNT; i++) {
      _levels[i] = Harl._levels[i];
      _printLog[i] = Harl._printLog[i];
    }
  }
  return (*this);
}

/**
 * @brief print debug log
 */
void Harl::debug(void) {
  std::cout << F_CYAN << "[ DEBUG ]" << FB_DEFAULT
            << " yena: true" << std::endl;
}

/**
 * @brief print info log
 */
void Harl::info(void) {
  std::cout << F_WHITE << "[ INFO ]" << FB_DEFAULT
            << " 1 node malloced for 1KB" << std::endl;
}

/**
 * @brief print warning log
 */
void Harl::warning(void) {
  std::cout << F_YELLOW << "[ WARNING ]" << FB_DEFAULT
            << " undefined behaviour" << std::endl;
}

/**
 * @brief print error log
 */
void Harl::error(void) {
  std::cout << F_RED << "[ ERROR ]" << FB_DEFAULT
            << " Segmentation fault" << std::endl;
}

/**
 * @brief call functions depends on level
 * @param level
 */
void Harl::complain(std::string level) {
  std::size_t i;

  i = getLevelIndex(level);
  if (i < LEVEL_COUNT)
    (this->*_printLog[i])();
  else
    std::cout << F_MAGENTA << "[ Harl ]" << FB_DEFAULT
              << " invalid level: " << level << std::endl;
}

/**
 * @brief get index of level from _levels
 * @param level
 * @return index of level
 */
std::size_t Harl::getLevelIndex(std::string level) {
  std::size_t i;

  i = 0;
  while (i < LEVEL_COUNT) {
    if (level == _levels[i])
      return (i);
    i++;
  }
  return (i);
}
