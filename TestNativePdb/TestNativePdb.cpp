// TestNativePdb.cpp�: d�finit le point d'entr�e pour l'application console.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	for (int i = 0; i < 1000000000; i++)
	{
		std::cout << i;
		std::cout << "\n";
	}
    return 0;
}

