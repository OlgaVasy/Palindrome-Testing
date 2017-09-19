// This is the Pstring class specification file.

#ifndef PSTRING_H
#define PSTRING_H
#include <string> 
using namespace std;

class Pstring : public std::string
{
	std::string str;

public:
	Pstring(std::string STRING_OBJECT) : std::string(STRING_OBJECT)
	{
		this->str = STRING_OBJECT;
	}
	bool isPalindrome();
};
#endif // !PSTRING_H

