#include <iostream>
using namespace std;

int main()
{
    int a, chislo, result;
    setlocale(0, "");
    cout << "   ИДЗ (11)" << endl;                                                // ИДЗ вар.11
    cout << "Введите число, которое хотите сдвинуть: ";
    cin >> chislo;
    cout << "Введите число, на которое сдвинется прошлое число: ";
    cin >> a;
    result = chislo << a;
    cout << "Итоговое число: " << result << endl;

    cout << endl << "    Задание 1" << endl;
    cout << "Сколько памяти (в байтах) на компьютере отводится под различные типы данных" << endl;
    cout << "int: " << sizeof(int) << endl << "short int: " << sizeof(short int) << endl             // 1 задание
        << "long int: " << sizeof(long int) << endl << "float: " << sizeof(float) << endl
        << "double: " << sizeof(double) << endl << "long double: " << sizeof(long double)
        << endl << "char: " << sizeof(char) << endl << "bool: " << sizeof(bool);
    cout << endl;

    cout << endl << "    Задание 2.1 (сдвиг числа)" << endl;                                             // 2.1 задание по сдвигу числа; 2.2 - по сдвигу маски
    cout << "Введите целое число, двоичное представление в памяти (все разряды) котрого хотите получить: ";
    cin >> chislo;
    int b = sizeof(chislo) * 8 - 1;
    int mask = 1 << b;
    for (int i = 0; i <= b; i++)
    {
        if ((i == 1) || ((i % 8) == 0))
        {
            putchar(' ');
        }
        putchar(chislo & mask ? '1' : '0');
        chislo = chislo << 1;               //сдвиг числа
    }
    cout << endl;

    cout << endl << "    Задание 2.2 (сдвиг маски)" << endl;
    cout << "Введите целое число, двоичное представление в памяти (все разряды) котрого хотите получить: ";
    cin >> chislo;
    int cdvig = sizeof(chislo) * 8 - 1;
    unsigned maska = 1 << cdvig;
    for (int i = 0; i <= cdvig; i++)
    {
        if ((i == 1) || ((i % 8) == 0))
        {
            putchar(' ');
        }
        putchar(chislo & maska ? '1' : '0');
        maska = maska >> 1;                   // сдвиг маски
    }
    cout << endl;

    cout << endl << "    Задание 3" << endl;                                                                       // 3 задание
    cout << "Введите число типа float, двоичное представление в памяти (все разряды) котрого хотите получить: ";
    union
    {
        int chislo2;
        float chislo1;
    };
    cin >> chislo1;
    int bit = sizeof(chislo1) * 8 - 1;
    int maskaa = 1 << bit;
    for (int i = 0; i <= bit; i++)
    {
        if ((i == 1) || ((i % 23) == 0))
        {
            putchar(' ');
        }
        putchar(chislo2 & maskaa ? '1' : '0');
        chislo2 = chislo2 << 1;
    }
    return 0;
}
