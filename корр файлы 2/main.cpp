#include "���������.hpp"
//������� 1. ���� ��� ��������� �����.��������, �����
//	������ �� ������. ���� ���, �� ������� �������������
//	������ �� ������� �����.
//������� 2. ��� ��������� ����.���������� �������
//	����� ���� � �������� ����� ��������� ���������� ��
//	��������� ����� :
//	? ���������� ��������;
//	? ���������� �����;
//	? ���������� ������� ����;
//	? ���������� ��������� ����;
//	? ���������� ����.
//�������3.���� ����������� �� ���������� ������.
//	��� ���������� ������ ������ ���������� ������,
//	��������� �� ���� � �������� �� ������������� �����
//	�������.
//	������
//	? ���������� � �������������� ����� : 3.
//	? ������������ ����� : ����� �� ��� ���� ������
//	����������� �����, �� ����� ���.
//������ 21
//? ����������� ����� : ����� �� ��� ���� �����
//����������� �����, �� ����� ���.
//? ��� ��������� ����. ����������� ���, ���������
//���� ������.��������� �������� � ������ ����.

int main()
{
	////������ ������ ���� 11111
	ofstream file("first_file.txt");
	if (!file)
	{

		cout << "���� �� ����� ���� ������ ��� ������";
		return 1;
	}
	else
	{
		//��������� � ���� ��� ������ 
		file << std::setw(3) << "Hello world! sss" << '\n';
		file << std::setw(3) << "Hello country!" ;
	}
	file.close();

	//������ ������ ����
	ofstream file2("second_file.txt");
		if (!file2.is_open())
		{
			cerr << "���� �� ����� ���� ������ ��� ������";
			
			exit(1);
		}
		else
		{
			//��������� � ���� ��� ������ 
			file2 << std::setw(3) << "Hello world! ttt" << '\n';
			file2 << std::setw(3) << "Hello yekaterinburg!" ;
		}
	file2.close();

	string str1;
	string str2;
	ifstream fileN("first_file.txt"); // �������� �� ����� � str1 
		while (!fileN.eof())
		{
			string tmp{};
			fileN >> tmp;
			str1 += tmp;			
		}
		cout << str1 << '\n';
		fileN.close();
		ifstream fileN2("second_file.txt");
		while (!fileN2.eof())// �������� �� ����� � str2 ��� ������� � ������� �������
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
		// ������� 2
		int symbols{}; //�������
		int deadlines{1}; //������
		int vowels{}; // �������
		int consonants{}; // ���������
		int numbers{}; // �����
		char arr_vowels[]{ "AaEeIiOoUuYy" };// ������ �������

		for (int i = 0; i < size(str2); i++) // �� ���������� ����
		{
			if (str2[i] > char(47) && str2[i] < char(58)) // ���� �� ������� ���� ��� �����
			{
				numbers++;
			}
			else if ((str2[i] > char(64) && str2[i] < char(91)) || (str2[i] > char(96) && str2[i] < char(123))) // ���� �� ������� ���� ��� �����
			{
				for (int j = 0; j < size(arr_vowels); j++) // ���� �� �������� �������
				{
					if (str2[i] == arr_vowels[j]) 
					{
						vowels++;
						break;						
					}
					else if (i == size(arr_vowels) - 1) // ���� �� ��������� �������� ���� �� ������� �����, �� ����������� ���������
					{
						consonants++;
					}
				}
			}
			else if (str2[i] == '\n') //���� ���� ������� ������ �� ��������� ����������� ����� 
			{
				deadlines++;
			}
			symbols++; // ������ �������� ��������� ���� ������(������ ���� ������)

		}
		cout << "\nquantity symbols: " << symbols << "\n quantity deadlines: " << deadlines << "\nquantity vowels: " << vowels << "\nquantity consonants: "
			<< consonants << "\nquantity numbers: " << numbers << '\n';
		cout << char(90);



	return 0;
}