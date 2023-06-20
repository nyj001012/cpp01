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

#include "common.hpp"

/**
 * replace line with find_to to replace_with
 * @param line
 * @param find_to
 * @param replace_with
 * @return replaced line
 */
std::string replace_line(std::string line, std::string find_to, std::string replace_with) {
  std::size_t find_pos;
  std::size_t sub_start;
  std::string replaced_line;

  find_pos = line.find(find_to);
  if (find_pos == std::string::npos)
    return (line);
  sub_start = 0;
  while (find_pos != std::string::npos) {
    replaced_line += line.substr(sub_start, find_pos - sub_start);
    replaced_line += replace_with;
    sub_start = find_pos + find_to.length();
    find_pos = line.find(find_to, sub_start);
  }
  replaced_line += line.substr(sub_start, line.length() - sub_start);
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
  std::string line;

  if (!input_stream.is_open()) {
    std::cout << "\033[0;31mError: file open failed\033[0m" << std::endl;
    return;
  }

  std::ofstream output_stream(replaced_file);
  while (input_stream.is_open() && output_stream.is_open()) {
    std::getline(input_stream, line);
    line = replace_line(line, s1, s2);
    output_stream << line;
    if (input_stream.eof())
      break;
    output_stream << std::endl;
  }
  input_stream.close();
  output_stream.close();
  std::cout << "\033[0;32mSuccess: " << replaced_file << " created\033[0m" << std::endl;
}
