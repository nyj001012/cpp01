/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 19:05:35 by yena              #+#    #+#             */
/*   Updated: 2023/06/13 15:15:28 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
  _levels[DEBUG] = "DEBUG";
  _levels[INFO] = "INFO";
  _levels[WARNING] = "WARNING";
  _levels[ERROR] = "ERROR";
  _printLog[DEBUG] = &Harl::debug;
  _printLog[INFO] = &Harl::info;
  _printLog[WARNING] = &Harl::warning;
  _printLog[ERROR] = &Harl::error;
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
            << " INFO node malloced for 1KB" << std::endl;
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
  std::size_t index = getLevelIndex(level);
  if (index == LEVEL_COUNT) {
    std::cout << F_MAGENTA << "[ Harl ]" << FB_DEFAULT
              << " invalid level: " << level << std::endl;
    return;
  }
  switch (index) {
    case DEBUG:
      debug();
    case INFO:
      info();
    case WARNING:
      warning();
    case ERROR:
      error();
    default:
      break;
  }
}

/**
 * @brief get index of level from _levels
 * @param level
 * @return index of level
 */
std::size_t Harl::getLevelIndex(std::string level) {
  for (std::size_t i = 0; i < LEVEL_COUNT; i++) {
    if (level == _levels[i])
      return (i);
  }
  return (LEVEL_COUNT);
}
