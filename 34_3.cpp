#include <iostream>
#include <cstdlib>
#include <utility>
#include <time.h>
#include <cstring>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdarg.h>



int main()
{
	setlocale(LC_ALL, "Russian");
	int i = 0, f = 0, f2 = 0, count = 0;
	char m[1000], m2[1000];
	FILE* file = fopen("file1.txt", "r");

	fseek(file, 0, SEEK_END);
	i = ftell(file);
	fseek(file, 0, SEEK_SET);
	fread(m, i, sizeof(char), file);
	fclose(file);
	while (f < i)
	{
		count = 0;
		while (m[f] != ' ' && f<i)
		{
			count++;
			f++;
		}
		if (count >= 7)
		{
			f -= count;
			while (m[f] != ' '&& f<i)
			{
				m2[f2] = m[f];
				f++;
				f2++;
			}
			m2[f2] = ' ';
			f2++;
		}
		f++;
	}
	m2[f2] = '\0';
	int i2 = 0;
	while (m2[i2] != '\0')
	{
		std::cout << m2[i2];
		i2++;
	}

	FILE* result = fopen("file1_result.txt", "w");
	fprintf(result, m2);

	system("pause");
	return 0;
}