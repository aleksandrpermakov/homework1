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
			cout << "���� �� ����� ���� ������ ��� ������";
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