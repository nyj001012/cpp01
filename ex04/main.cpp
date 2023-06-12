/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:40:23 by yena              #+#    #+#             */
/*   Updated: 2023/06/12 19:00:52 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/common.hpp"

int main(int argc, char *argv[]) {
  std::string filename;
  std::string replaced_file;
  std::string s1;
  std::string s2;

  if (argc == 4) {
    filename = argv[1];
    replaced_file = filename + ".replace";
    s1 = argv[2];
    s2 = argv[3];
    replace_and_store_file(filename, replaced_file, s1, s2);
    return (0);
  }
  std::cout << "\033[0;31mError: invalid arguments" << std::endl;
  return (1);
}
