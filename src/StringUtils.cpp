/*
	File Name:      StringUtils.cpp
	Author:         Eddie N. (en@sector572.com)

	Description:    StringUtils implementation.

    Original Date:  2005-12-05
*/
#include <string>
#include <vector>
#include <iostream>
#include <cstring>

#include "StringUtils.h"

#ifndef _STRINGUTILS_CPP_
#define _STRINGUTILS_CPP_

/*
    Default constructor implementation.
*/
com::sector572::util::StringUtils::StringUtils()
{
    // do nothing
}

/*
    Default destructor implementation.
*/
com::sector572::util::StringUtils::~StringUtils()
{
    // do nothing
}

void com::sector572::util::StringUtils::split(
    const char* str,
    const char delimiter,
    std::vector<std::string> &destination)
{
    split(str,
          strlen(str),
          delimiter,
          destination);
}

void com::sector572::util::StringUtils::split(
    const char* str,
    size_t strlen,
    const char delimiter,
    std::vector<std::string> &destination)
{
    std::string buffer = "";
    int len = strlen;
    char lastChar = '\0';

    for(int i = 0; i < len && str[i] != '\0'; i++)
    {
        if(str[i] != delimiter)
        {
            // Append the character at index i to the buffer string.
            buffer += str[i];
        }

        if((str[i] == delimiter) ||
            ((i == len - 1) && (str[i] != delimiter)))
        {
            // Add the buffer string to the vector and clear the buffer.
            destination.push_back(buffer);
            buffer = "";
        }

        lastChar = str[i];
    }

    if(lastChar == delimiter)
    {
        // empty string found at end of line.
        destination.push_back("");
    }
}

#endif
