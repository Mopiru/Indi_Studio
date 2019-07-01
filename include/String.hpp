/*
** EPITECH PROJECT, 2019
** IndieStudio
** File description:
** include/String.hpp
*/

#ifndef STRING_HPP
#define STRING_HPP

#include <string>

namespace Utils {

class String {
public:
	static bool isBlank(const std::string &str);
	static bool isEmpty(const std::string &str);
	static bool isEqual(const std::string &s1, const std::string &s2);
	static bool isEqualIgnoreCase(const std::string &s1, const std::string &s2);
	static std::string toLowerCase(const std::string &str);
	static std::string toUpperCase(const std::string &str);
};
}

#endif /* STRING_HPP */
