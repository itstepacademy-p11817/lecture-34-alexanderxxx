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
	char temp[100];
	FILE* file = fopen("file2.txt", "r");
	fseek(file, 0, SEEK_END);
	i = ftell(file);
	fseek(file, 0, SEEK_SET);


	//int s = 0;
	//while (fgets(temp, i, file))
	//{
	//	s++;
	//}
	//fseek(file, 0, SEEK_SET);
	
	//char** l_m = (char**)malloc(s * sizeof(char*));
	//for (int i = 0; i < s; i++)
	//{
	//	char m[100] = {'\0'};
	//	fgets(m, i, file);
	//	l_m[i] = (char*)malloc(strlen(m) * sizeof(char));
	//	strcpy(l_m[i], m);
	//}

	


	//fclose(file);

	FILE* result = fopen("file2_result.txt", "w");

	while (fgets(temp, i, file))
	{
		fprintf(result, temp);
	}
	fseek(file, 0, SEEK_SET);

	//for (int i = 0; i < s; i++)
	//{
	//	fprintf(result, l_m[i]);
	//}




	//fgets(line, i, file);

	//fprintf(result, );

	fclose(file);
	fclose(result);
	system("pause");
	return 0;
}