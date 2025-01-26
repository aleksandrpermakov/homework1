#include "заголовок.hpp"

void Print(char* arr, int length)
{

	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << '\n';

}

void LineAalignment(string str1, string str2) // выравнивание строк , добавляю пробелы в меньшую строку
{
	if (size(str1) > size(str2))
	{
		int difference = size(str1) - size(str2);
						
		for (int i = 0; i < difference; i++)
		{
			//str2.push_back(' '); //метод добавления символа в строку
			//str2.append(" ");
			
		}
		str2.resize(size(str2) + difference, ' ');
	}
	
	else
	{
		
		int difference = size(str2) - size(str1);
		
		for (int i = 0; i < difference; i++)
		{
			//str1.push_back(' '); //метод добавления символа в строку
			//str1.append(" ");
		}
		str1.resize(size(str1) + difference,' ');
	}
}