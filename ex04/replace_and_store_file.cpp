/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaced_and_store_file.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:27:25 by yena              #+#    #+#             */
/*   Updated: 2023/06/12 19:02:26 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/common.hpp"

/**
 * replace line with find_to to replace_with
 * @param line
 * @param find_to
 * @param replace_with
 * @return replaced line
 */
std::string replace_line(std::string line, std::string find_to, std::string replace_with) {
  std::size_t position;
  std::string replaced_line;

  position = line.find(find_to);
  if (position == std::string::npos)
    return (line);
  replaced_line = line.replace(
      position,
      find_to.length(),
      replace_with
  );
  return (replaced_line);
}

/**
 * read file and replace s1 to s2 and store to replaced_file
 * @param filename
 * @param replaced_file
 * @param s1
 * @param s2
 */
void replace_and_store_file(std::string filename, std::string replaced_file,
                            std::string s1, std::string s2) {
  std::ifstream input_stream(filename);
  std::ofstream output_stream(replaced_file);
  std::string line;

  if (!input_stream.is_open() || !output_stream.is_open())
    std::cout << "\033[0;31mError: file open failed" << std::endl;
  while (input_stream && output_stream) {
    std::getline(input_stream, line);
    line = replace_line(line, s1, s2);
    output_stream << line;
    if (input_stream.eof())
      break;
    output_stream << std::endl;
  }
  input_stream.close();
  output_stream.close();
  std::cout << "\033[0;32mSuccess: " << replaced_file << " created" << std::endl;
}
