// Palindrome Testing
// This program determines whether the string entered is a palindrome.

#include <iostream>
#include <string>
#include "Pstring.h"
using namespace std;

int main()
{
	std::string STRING_INPUT; 	
	bool result;	
	
	std::cout << "Please enter a word or a phrase: ";
	std::getline(std::cin, STRING_INPUT);	
	
	Pstring str = STRING_INPUT;

	if (str.isPalindrome())
		std::cout << str << " is a palindrome. " << endl;
	else
		std::cout << str << " is not a palindrome. " << endl;
	
	system("PAUSE");

	return 0;
}