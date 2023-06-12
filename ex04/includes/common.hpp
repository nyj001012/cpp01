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
# include <regex>

std::string replace_line(std::string line, std::string find_to,
                         std::string replace_with);
void replace_and_store_file(std::string filename, std::string replaced_file,
                            std::string s1, std::string s2);

#endif //CPP01_EX04_INCLUDE_COMMON_HPP_
