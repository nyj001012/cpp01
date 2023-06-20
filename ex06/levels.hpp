//
// Created by Yejin Na on 6/20/23.
//

#ifndef CPP01_PRACTISE_EX06_LEVELS_HPP_
#define CPP01_PRACTISE_EX06_LEVELS_HPP_

#define LEVEL_COUNT 4

#define F_BLACK "\033[0;30m"
#define F_RED "\033[0;31m"
#define F_GREEN "\033[0;32m"
#define F_YELLOW "\033[0;33m"
#define F_BLUE "\033[0;34m"
#define F_MAGENTA "\033[0;35m"
#define F_CYAN "\033[0;36m"
#define F_WHITE "\033[0;37m"
#define FB_DEFAULT "\033[0m"

enum e_levels {
  DEBUG,
  INFO,
  WARNING,
  ERROR
};

#endif //CPP01_PRACTISE_EX06_LEVELS_HPP_
