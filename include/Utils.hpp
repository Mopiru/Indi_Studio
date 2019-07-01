/*
** EPITECH PROJECT, 2018
** IndieStudio
** File description:
** include/Utils.hpp
*/

#ifndef UTILS_HPP
#define UTILS_HPP

// Attributes
#define DEPRECATED_MSG(msg) __attribute__((deprecated(msg))) // Deprecated method message
#define ERROR(msg) __attribute__((error(msg))) // Error (do not use) method message
#define FALLTHROUGH __attribute__((fallthrough)) // Allow switch case fallthrough
#define NONNULL(...) __attribute__((nonnull (__VA_ARGS__))) // Specify arguments of a method should be non null
#define UNUSED __attribute__((unused)) // Specify that a variable may be unused
#define WARN_UNUSED_RESULT __attribute__ ((warn_unused_result)) // Warn on unused result
#define WARNING(msg) __attribute__((warning(msg))) // Warning method message

// GCC globals
#define FILE_NAME __FILE__ // Get the current file name
#define LINE_NUMBER __LINE__ // Get the current line
#define METHOD_NAME __FUNCTION__ // Get the current method name

#endif /* UTILS_HPP */
