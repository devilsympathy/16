#include <iostream>

int fibonacci(int num)
{
	if (num <= 0) { return 0; }
	if (num == 1) { return 1; }
	else
	{
		return fibonacci(num - 1) + fibonacci(num - 2);
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	int numbers;
	std::cout << "Введите число: ";
	std::cin >> numbers;

	std::cout << "Числа Фибоначчи: ";
	for (int i = 0; i < numbers; i++)
	{
		std::cout << fibonacci(i) << " ";
	}
	std::cout << std::endl;
	return 0;
}
