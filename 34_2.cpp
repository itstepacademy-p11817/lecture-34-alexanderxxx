#include <iostream>
#include <cstdlib>
#include <utility>
#include <time.h>
#include <cstring>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdarg.h>



int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int ch = 0, nch = 0;
	for (int i = 0; i < argc; i++)
	{
		if (atoi(argv[i]) % 2 == 0)
		{
			ch++;
		}
		else
		{
			nch++;
		}
	}
	if (ch > nch)
	{
		std::cout << "Чётных больше" << '\n';
	}
	else
	{
		std::cout << "Нечётных больше" << '\n';
	}


	system("pause");
	return 0;
}