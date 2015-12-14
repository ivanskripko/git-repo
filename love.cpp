#include <iostream>
#include <string>
#include "love.h"

void printLoveWords(const std::string& name) 
{
	std::cout << "I love you, " << name << std::endl;
}

void printLoveWords() 
{
	std::cout << "I love you!" << std::endl;
}