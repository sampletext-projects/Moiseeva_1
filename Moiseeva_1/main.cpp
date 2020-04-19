#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Автор: Моисеева Наталия\n";
	cout << "Программа для вычисления таблицы функции" << endl;

	cout << setw(6 + 4) << "A";
	for (int a = 1; a <= 5; a++)
	{
		cout << setw(5) << a;
	}
	cout << "\n";

	//т.к. присутствует ошибка округления, я умножил все значения X на 2, а потом разделил обратно.
	//Это позволило избежать ошибка и переместить значения в целые числа. real_x - реальное значение X при вычислении
	for (int x = -8; x <= 8; x++)
	{
		double real_x = x / 2.;
		cout << "f(" << setw(4) << real_x << ") = ";
		for (int a = 1; a <= 5; a++)
		{
			double result;
			if (real_x < -1)
			{
				result = real_x + a;
			}
			else if (real_x > 1)
			{
				result = -real_x + a;
			}
			else
			{
				result = a;
			}
			cout << setw(5) << result;
		}
		cout << "\n";
	}

	system("pause");

	return 0;
}
