/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:31:59 by yena              #+#    #+#             */
/*   Updated: 2023/06/12 16:55:24 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP01_EX04_INCLUDE_COMMON_HPP_
#define CPP01_EX04_INCLUDE_COMMON_HPP_

# include <iostream>
# include <fstream>

#define F_BLACK "\033[0;30m"
#define F_RED "\033[0;31m"
#define F_GREEN "\033[0;32m"
#define F_YELLOW "\033[0;33m"
#define F_BLUE "\033[0;34m"
#define F_MAGENTA "\033[0;35m"
#define F_CYAN "\033[0;36m"
#define F_WHITE "\033[0;37m"
#define FB_DEFAULT "\033[0m"

std::string replace_line(std::string line, std::string find_to,
                         std::string replace_with);
void replace_and_store_file(std::string filename, std::string replaced_file,
                            std::string s1, std::string s2);

#endif //CPP01_EX04_INCLUDE_COMMON_HPP_
