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
	FILE* file = fopen("file3.txt", "r");
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
		//std::cout << m;
	}


	//char** l_m = (char**)malloc(s * sizeof(char*));

	//fclose(file);

	FILE* result = fopen("file3_result.txt", "w");

	//char m[100];

	//while (fgets(temp, ii, file))
	//{
	//	strcpy(l_m[i], temp);
	//}
	//fseek(file, 0, SEEK_SET);

	for (int i2 = s-1; i2 >= 0; i2--)
	{
		fprintf(result, l_m[i2]);
	}




	//fgets(line, i, file);

	//fprintf(result, );

	fclose(file);
	fclose(result);
	system("pause");
	return 0;
}