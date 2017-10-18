#include <iostream>
#include <cstdlib>
#include <utility>
#include <time.h>
#include <cstring>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdarg.h>

int f(int a)
{
	if (a == 0 || a == 1)
	{
		return 1;
	}
	int p = 0;
	for (int i = a; i > 0; i--)
	{
		if (a % i == 0)
		{
			p++;
		}
	}
	if (p > 2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int func(int num, ...)
{
	va_list valist;
	int count = 0;

	va_start(valist, num);

	for (int i = 0; i < num; i++)
	{
		if (f(va_arg(valist, int)) == 0)
		{
			count++;
		}
	}
	va_end(valist);
	return count;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int n = 7;
	//std::cout << "count of arguments: ";
	//std::cin >> n;
	std::cout << func(n, 2, 5, 6, 89, 7, 5, 3);


	system("pause");
	return 0;
}