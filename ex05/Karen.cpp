/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 19:05:35 by yena              #+#    #+#             */
/*   Updated: 2023/06/12 20:06:07 by yena             ###   ########.fr       */
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
  std::cout << "\033[0;36m[ DEBUG ]\033[0m " << "yena: true" << std::endl;
}

/**
 * @brief print info log
 */
void Karen::info(void) {
  std::cout << "\033[0;37m[ INFO ]\033[0m "
            << "1 node malloced for 1KB" << std::endl;
}

/**
 * @brief print warning log
 */
void Karen::warning(void) {
  std::cout << "\033[0;33m[ WARNING ]\033[0m "
            << "undefined behaviour" << std::endl;
}

/**
 * @brief print error log
 */
void Karen::error(void) {
  std::cout << "\033[0;31m[ ERROR ]\033[0m "
            << "Segmentation fault" << std::endl;
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
    std::cout << "\033[0;35m[ Karen ]\033[0m"
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