// cppprimer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "Enter two numbers" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The sum of " << v1 << "and" << v2 << "is" << v1 + v2 << std::endl;
	
	return 0;
}

