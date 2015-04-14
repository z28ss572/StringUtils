/*
	File Name:      StringUtils.h
	Author:         Eddie N. (en@sector572.com)

	Description:    A simple class which contains some String utility methods.
                    At this time I have only implemented a split method. This
                    method accepts a string and split it into a vector by the
                    delimiter provided.

    Original Date:  2005-12-05
*/
#include <string>
#include <vector>
#include <iostream>

#ifndef _STRINGUTILS_H_
#define _STRINGUTILS_H_ v0.1.0
namespace com
{
    namespace sector572
    {
        namespace util
        {
            class StringUtils
            {
                public:
                    /*
                    Default constructor.
                    */
                    StringUtils();

                    /*
                    Default destructor.
                    */
                    ~StringUtils();

                    /*
                    A split method which accepts a char* string, a char
                    delimiter, and a vector<string> reference that will
                    be used to store the split strings matched in the
                    str passed to this method.

                    This method uses strlen (which may not be safe) to
                    determine the length of str.
                    */
                    void split(
                        const char* str,
                        const char delimiter,
                        std::vector<std::string> &destination);

                    /*
                    A split method which accepts a char* string, a char
                    delimiter, and a vector<string> reference that will
                    be used to store the split strings matched in the
                    str passed to this method.

                    This method accepts the strlen as a parameter to denote
                    the maximum traversal length of the str.
                    */
                    void split(
                        const char* str,
                        size_t strlen,
                        const char delimiter,
                        std::vector<std::string> &destination);
            };
        };
    };
};
#endif
