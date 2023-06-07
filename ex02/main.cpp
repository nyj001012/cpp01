/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:30:12 by yena              #+#    #+#             */
/*   Updated: 2023/06/07 20:36:09 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
  std::string original = "HI THIS IS BRAIN";
  std::string *stringPTR = &original;
  std::string &stringREF = original;

  std::cout << "original  : " << original << "\tAddress: "
            << &original << std::endl;
  std::cout << "*stringPTR: " << *stringPTR << "\tAddress: "
            << stringPTR << std::endl;
  std::cout << "&stringREF: " << stringREF << "\tAddress: "
            << &stringREF << std::endl;
  return (0);
}
