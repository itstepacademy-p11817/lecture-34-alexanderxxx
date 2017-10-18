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
	int ii = 0, f = 0, f2 = 0, count = 0;
	char temp[100];
	FILE* file = fopen("file.txt", "r");
	fseek(file, 0, SEEK_END);
	ii = ftell(file);
	fseek(file, 0, SEEK_SET);

	int s = 0;
	while (fgets(temp, ii, file))
	{
		s++;
	}
	fseek(file, 0, SEEK_SET);

	char** l_m = (char**)malloc(s * sizeof(char*));
	for (int i = 0; i < s; i++)
	{
		char m[100];
		fgets(m, ii, file);
		l_m[i] = (char*)malloc(strlen(m) * sizeof(char));
		strcpy(l_m[i], m);
	}

	fclose(file);

	l_m[s] = (char*)malloc(14 * sizeof(char));
	l_m[s] = "------------\n";
	int flag = 0;
	for (int i = 0; i < s; i++)
	{
		int i2 = 0;
		while (l_m[i][i2] != ' ')
		{
			i2++;
			if (l_m[i][i2] == '\0')
			{
				flag = i;
			}
		}
	}
	
	for (int i = s; i > flag+1; i--)
	{
		std::swap(l_m[i], l_m[i-1]);
	}

	FILE* result = fopen("file4_result.txt", "w");

	for (int i = 0; i <= s; i++)
	{
		fprintf(result, l_m[i]);
	}

	fclose(result);
	system("pause");
	return 0;
}