#include "заголовок.hpp"
//Задание 1. Дано два текстовых файла.Выяснить, совпа
//	даютли их строки. Если нет, то вывести несовпадающую
//	строку из каждого файла.
//Задание 2. Дан текстовый файл.Необходимо создать
//	новый файл и записать внего следующую статистику по
//	исходному файлу :
//	? Количество символов;
//	? Количество строк;
//	? Количество гласных букв;
//	? Количество согласных букв;
//	? Количество цифр.
//Задание3.Шифр Цезаря—один из древнейших шифров.
//	При шифровании каждый символ заменяется другим,
//	отстоящим от него в алфавите на фиксированное число
//	позиций.
//	Пример
//	? Шифрование с использованием ключа : 3.
//	? Оригинальный текст : Съешь же ещё этих мягких
//	французских булок, да выпей чаю.
//Неделя 21
//? Шифрованный текст : Фэзыя йз зьи ахлш пвёнлш
//чугрщцкфнлш дцосн, жг еютзм ъгб.
//? Дан текстовый файл. Зашифровать его, используя
//шифр Цезаря.Результат записать в другой файл.

int main()
{
	////создаю первый файл 11111
	ofstream file("first_file.txt");
	if (!file)
	{

		cout << "Файл не может быть создан или открыт";
		return 1;
	}
	else
	{
		//записываю в файл две строки 
		file << std::setw(3) << "Hello world! sss" << '\n';
		file << std::setw(3) << "Hello country!" ;
	}
	file.close();

	//создаю второй файл
	ofstream file2("second_file.txt");
		if (!file2.is_open())
		{
			cerr << "Файл не может быть создан или открыт";
			
			exit(1);
		}
		else
		{
			//записываю в файл две строки 
			file2 << std::setw(3) << "Hello world! ttt" << '\n';
			file2 << std::setw(3) << "Hello yekaterinburg!" ;
		}
	file2.close();

	string str1;
	string str2;
	ifstream fileN("first_file.txt"); // считываю из файла в str1 
		while (!fileN.eof())
		{
			string tmp{};
			fileN >> tmp;
			str1 += tmp;			
		}
		cout << str1 << '\n';
		fileN.close();
		ifstream fileN2("second_file.txt");
		while (!fileN2.eof())// считываю из файла в str2 для первого и второго задания
		{
			string tmp{};
			fileN2 >> tmp;
			str2 += tmp;
		}
		cout << str2 << '\n';
		
		fileN2.close();

		cout << size(str1) << ' ' << size(str2) << '\n';
		LineAalignment(str1, str2);
		cout << size(str1) << ' ' << size(str2) << '\n';
		if (str1 == str2)
		{
			cout << "The strings are equal.";
		}	
		else
		{
			cout << "Different lines of the first file:\n";
			for (int i = 0; i < size(str1); i++)
			{
				if (str1[i] != str2[i])
				{
					cout << str1[i];
				}
			}
			cout << '\n';
			cout << "Different lines of the second file:\n";
			for (int i = 0; i < size(str1); i++)
			{
				if (str1[i] != str2[i])
				{
					cout << str2[i];
				}
			}
		}
		// задание 2
		int symbols{}; //символы
		int deadlines{1}; //строки
		int vowels{}; // гласные
		int consonants{}; // согласные
		int numbers{}; // цифры
		char arr_vowels[]{ "AaEeIiOoUuYy" };// массив гласных

		for (int i = 0; i < size(str2); i++) // по символьный цикл
		{
			if (str2[i] > char(47) && str2[i] < char(58)) // если по таблице аски это цифра
			{
				numbers++;
			}
			else if ((str2[i] > char(64) && str2[i] < char(91)) || (str2[i] > char(96) && str2[i] < char(123))) // если по таблице аски это буква
			{
				for (int j = 0; j < size(arr_vowels); j++) // цикл на проверку гласных
				{
					if (str2[i] == arr_vowels[j]) 
					{
						vowels++;
						break;						
					}
					else if (i == size(arr_vowels) - 1) // если на последней итерации цикл не прервал брейк, то добавляется согласная
					{
						consonants++;
					}
				}
			}
			else if (str2[i] == '\n') //если есть перевод строки то добавляем колличество строк 
			{
				deadlines++;
			}
			symbols++; // каждую итерацию добавляем один символ(пробел тоже символ)

		}
		cout << "\nquantity symbols: " << symbols << "\n quantity deadlines: " << deadlines << "\nquantity vowels: " << vowels << "\nquantity consonants: "
			<< consonants << "\nquantity numbers: " << numbers << '\n';
		cout << char(90);



	return 0;
}