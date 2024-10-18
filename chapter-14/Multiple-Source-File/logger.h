/*
 * Author  : Saud Zahir
 * Date    : October 18, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Compiling Multiple-Source-File Programs
 */

#ifndef LOGGER_H
#define LOGGER_H

#include <stdio.h>

#define DEBUG(...) printf(__TIME__ " DEBUG : " __VA_ARGS__)
#define INFO(...) printf(__TIME__ " INFO : " __VA_ARGS__)
#define WARN(...) printf(__TIME__ " WARNING : " __VA_ARGS__)
#define ERROR(...) printf(__TIME__ " ERROR : " __VA_ARGS__)

#endif
