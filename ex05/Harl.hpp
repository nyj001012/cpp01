/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 19:05:35 by yena              #+#    #+#             */
/*   Updated: 2023/06/12 19:56:25 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP01_EX05_HARL_HPP_
#define CPP01_EX05_HARL_HPP_

# include <iostream>
# define LEVEL_COUNT 4

class Harl {
 private:
  std::string _levels[LEVEL_COUNT];
  void (Harl::*_printLog[LEVEL_COUNT])(void);
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);

 public:
  Harl(void);
  ~Harl(void);
  Harl &operator=(const Harl &Harl);
  void complain(std::string level);
  std::size_t getLevelIndex(std::string level);
};

#endif //CPP01_EX05_HARL_HPP_
