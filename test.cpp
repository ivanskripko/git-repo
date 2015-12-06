#include <iostream>
#include <string>
#include "test.h"

void printGreeting(const std::string& name) 
{
	std::cout << "Hello, " << name << "!" << std::endl;
}

void printFarewell(const std::string& name)
{
	std::cout << "Goodbye, " << name << "!" << std::endl;
}