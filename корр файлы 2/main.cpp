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
			cout << "Файл не может быть создан или открыт";
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
	ifstream fileN("first_file.txt");
		while (!fileN.eof())
		{
			char tmp{};
			fileN >> tmp;
			str1 += tmp;			
		}
		cout << str1 << '\n';
		fileN.close();
		ifstream fileN2("second_file.txt");
		while (getline(fileN2, str2))
		{
			cout << str2 << '\n';
		}
		fileN2.close();
		
		/*if (str1 == str2)
		{
			cout << "The strings are equal.";
		}
		else
		{*/
			cout << "Different lines of the first file:\n";
			for (int i = 0; i < size(str2) && i < str1.size(); i++)
			{
				if (str1[i] != str2[i])
				{
					cout << str1[i];
				}
			}
			cout << '\n';
			cout << "Different lines of the second file:\n";
			for (int i = 0; i < size(str2) && i < size(str1); i++)
			{
				if (str1[i] != str2[i])
				{
					cout << str2[i];
				}
			}
		//}



	return 0;
}