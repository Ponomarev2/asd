#include <iostream>
#include <stdexcept> // библиотека обработки ошибок (throw std::range_error)
#include <time.h>

using namespace std;

/*
   Функция выводит название дня недели
*/
void print_day_of_week(int dow)
{
	switch (dow)
	{
	case 1: cout << "Monday \n"; break;
	case 2: cout << "Tuesday \n"; break;
	case 3: cout << "Wednesday \n"; break;
	case 4: cout << "Thursday \n"; break;
	case 5: cout << "Friday \n"; break;
	case 6: cout << "Saturday \n"; break;
	case 7: cout << "Sunday \n"; break;

	default:
		break;
	}
	// TODO: здесь идет оператор SWITCH для...
	// ПОДСКАЗКА: если dow = 1 печатаем "monday" и т.д.
}

/*
   Функция считывает номера от 1 до 7 и возвращает этот номер, проверяя ошибочный ввод
*/
int read_day_of_week()
{
	int day;
	cin >> day;
	if (day < 1 || day > 7) {
		throw std::range_error("номер дня должен быть в диапазоне [1, 7]");
	}
	return day;
}

int main()
{
	int dow = read_day_of_week();
	//dow = 1;//  TODO: вызов функции для ввода текущего дня недели 
	print_day_of_week(dow); // TODO: вызов функции print_day_of_week для dow    
	system("pause");
}

