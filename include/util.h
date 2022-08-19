#ifndef HAVE_UTIL_H
#define HAVE_UTIL_H
#include "common.h"
#include <stdbool.h>

/**
 * @brief Convert an unsigned long to unsigned integer safely, limit the range between 0~UINT_MAX
 * 
 * @param value The unsinged long to convert
 * @return unsigned int The converted unsinged integer
 */
unsigned int util_uint_from_ulong(unsigned long value);

/**
 * @brief Convert a long to integer safely, limit the range between INT_MIN~INT_MAX
 * 
 * @param value The long to convert
 * @return int The converted integer
 */
int util_int_from_long(long value);

long util_file_get_length(FILE *fp);

long util_file_get_length_and_rollback(FILE *fp);

long util_file_get_length_and_restart(FILE *fp);

char *util_unescape_mountinfo(char *escaped);

void util_unesacpe_mountinfo_in_place(char *escaped);

bool util_mkdir(const char *path, mode_t mode);

bool util_mkdir_recursive(const char *path, mode_t mode);

#endif