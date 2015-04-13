/*
	File Name:      Test.cpp
	Author:         Eddie N. (en@sector572.com)

	Description:    A simple program to Test the StringUtils class.

    Original Date:  2005-12-05
*/
#include "../src/StringUtils.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	vector<string> record;
	com::sector572::util::StringUtils su;
    int lastItem = argc - 1;

	for(int i = 1; i < argc; i++)
	{
		record.clear();
		su.split(argv[i], ',', record);

		for(int j = 0; j < record.size(); j++)
		{
			cout << "record[" << j << "] = '" << record[j] << "'" << endl;
		}

        if(i < lastItem)
        {
		    cout << endl << endl;
        }
	}
	return 0;
}
