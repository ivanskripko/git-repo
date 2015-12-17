#include <iostream>
#include <string>
#include "test.h"

// основная функция программы
int main (int argc, const char* argv[]) 
{
	std::string name;
	std::cin >> name;
	printGreeting(name);
	printFarewell(name);
	printGreeting();
	printLoveWords(name);
	printGreeting();
	printGreeting();
	
	return 0;
}