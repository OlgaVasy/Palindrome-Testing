// This is the Pstring class function implementation file

#include "Pstring.h"
#include <string>
using namespace std;

bool Pstring::isPalindrome()
{	
	int	last = str.size() - 1;
	bool isPal = false;	
	
	for (int count = 0; count < str.size() / 2; count++)
	{
			if (str[count] == str[last])
				isPal = true;
			else
			{
				isPal = false;
				break;
			}
				last--;		
	}	
	return isPal;
}