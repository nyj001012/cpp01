/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 19:05:35 by yena              #+#    #+#             */
/*   Updated: 2023/06/12 20:14:32 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void) {
  _levels[0] = "DEBUG";
  _levels[1] = "INFO";
  _levels[2] = "WARNING";
  _levels[3] = "ERROR";
  _printLog[0] = &Karen::debug;
  _printLog[1] = &Karen::info;
  _printLog[2] = &Karen::warning;
  _printLog[3] = &Karen::error;
}

Karen::~Karen(void) {

}

Karen &Karen::operator=(const Karen &karen) {
  if (this != &karen) {
    for (int i = 0; i < LEVEL_COUNT; i++) {
      _levels[i] = karen._levels[i];
      _printLog[i] = karen._printLog[i];
    }
  }
  return (*this);
}

/**
 * @brief print debug log
 */
void Karen::debug(void) {
  std::cout << "\033[0;34m[ DEBUG ]\033[0m"
               " I love to get extra bacon"
               " for my 7XL-double-cheese-triple-pickle-special-ketchup burger."
               " I just love it!"
            << std::endl;
}

/**
 * @brief print info log
 */
void Karen::info(void) {
  std::cout << "\033[0;37m[ INFO ]\033[0m"
            << " I cannot believe adding extra bacon cost more money."
               " You don’t put enough!"
               " If you did I would not have to ask for it!"
            << std::endl;
}

/**
 * @brief print warning log
 */
void Karen::warning(void) {
  std::cout << "\033[0;33m[ WARNING ]\033[0m"
            << " I think I deserve to have some extra bacon for free."
               " I’ve been coming here for years"
               " and you just started working here last month."
            << std::endl;
}

/**
 * @brief print error log
 */
void Karen::error(void) {
  std::cout << "\033[0;31m[ ERROR ]\033[0m"
            << " This is unacceptable, I want to speak to the manager now."
            << std::endl;
}

/**
 * @brief call functions depends on level
 * @param level
 */
void Karen::complain(std::string level) {
  std::size_t i;

  i = getLevelIndex(level);
  if (i < LEVEL_COUNT)
    (this->*_printLog[i])();
  else
    std::cout << "\033[0;35m[ KAREN ]\033[0m"
              << " invalid level: " << level << std::endl;
}

/**
 * @brief get index of level from _levels
 * @param level
 * @return index of level
 */
std::size_t Karen::getLevelIndex(std::string level) {
  std::size_t i;

  i = 0;
  while (i < LEVEL_COUNT) {
    if (level == _levels[i])
      return (i);
    i++;
  }
  return (i);
}
