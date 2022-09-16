#include <iostream>

enum class Month
{
	Junuary = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

void printMonth(Month month)
{
	switch (month)
	{
	case Month::Junuary:
		std::cout << "������";
		break;
	case Month::February:
		std::cout << "�������";
		break;
	case Month::March:
		std::cout << "����";
		break;
	case Month::April:
		std::cout << "������";
		break;
	case Month::May:
		std::cout << "���";
		break;
	case Month::June:
		std::cout << "����";
		break;
	case Month::July:
		std::cout << "����";
		break;
	case Month::August:
		std::cout << "������";
		break;
	case Month::September:
		std::cout << "��������";
		break;
	case Month::October:
		std::cout << "�������";
		break;
	case Month::November:
		std::cout << "������";
		break;
	case Month::December:
		std::cout << "�������";
		break;
	default:
		break;
	}

	std::cout << std::endl;
}

int main()
{
	int monthNum = 0;
	setlocale(LC_ALL, "Russian");
	do
	{
		std::cout << "������� ����� ������: ";
		std::cin >> monthNum;

		if (monthNum >= 1 && monthNum <= 12)
		{
			printMonth(static_cast<Month>(monthNum));
		}
		else if (monthNum != 0)
		{
			std::cout << "������������ �����!" << std::endl;
		}
	} while (monthNum != 0);

	std::cout << "�� ��������" << std::endl;
}
