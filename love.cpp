#include <iostream>
#include <string>
#include "love.h"

// выводит слова любви для человека
void printLoveWords(const std::string& name) 
{
	std::cout << "I love you, " << name << std::endl;
}

void printLoveWords() 
{
	std::cout << "I love you!" << std::endl;
}