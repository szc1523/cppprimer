// cppprimer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "Input Two Integers ";
	int v1 = 0, v2 = 0, temp = 0;
	std::cin >> v1 >> v2;
	if (v1 > v2){
		temp = v1;
		v1 = v2;
		v2 = temp;
	}

	int i = v1;
	while (i <= v2){
		std::cout << " " << i;
		++i;
	}

	system("pause");
	return 0;
}

