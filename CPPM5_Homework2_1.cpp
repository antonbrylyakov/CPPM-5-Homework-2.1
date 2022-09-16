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
		std::cout << "Январь";
		break;
	case Month::February:
		std::cout << "Февраль";
		break;
	case Month::March:
		std::cout << "Март";
		break;
	case Month::April:
		std::cout << "Апрель";
		break;
	case Month::May:
		std::cout << "Май";
		break;
	case Month::June:
		std::cout << "Июнь";
		break;
	case Month::July:
		std::cout << "Июль";
		break;
	case Month::August:
		std::cout << "Август";
		break;
	case Month::September:
		std::cout << "Сентябрь";
		break;
	case Month::October:
		std::cout << "Октябрь";
		break;
	case Month::November:
		std::cout << "Ноябрь";
		break;
	case Month::December:
		std::cout << "Декабрь";
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
		std::cout << "Введите номер месяца: ";
		std::cin >> monthNum;

		if (monthNum >= 1 && monthNum <= 12)
		{
			printMonth(static_cast<Month>(monthNum));
		}
		else if (monthNum != 0)
		{
			std::cout << "Неправильный номер!" << std::endl;
		}
	} while (monthNum != 0);

	std::cout << "До свидания" << std::endl;
}
