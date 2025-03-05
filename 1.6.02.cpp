#include <iostream>

void powerValues(int number, int powerValue) 
{
    int result{ 1 };
    for (int i = 0; i < powerValue; i++) 
    {
        result *= number;
    }
    std::cout << number << " в степени " << powerValue << " = " << result << std::endl;
}

int main(int argc, char** argv) 
{
    setlocale(LC_ALL, "ru");
    int value, power;

    value = 5;
    power = 2;
    powerValues(value, power);

    value = 3;
    power = 3;
    powerValues(value, power);

    value = 4;
    power = 4;
    powerValues(value, power);
    return 0;
}
