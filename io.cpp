#include <iomanip>
#include <iostream>

#include "stats.h"
using namespace std;

// template <typename T>
// void printArray(T arr[], int n)
// {
//     for (int i = 0; i < n; ++i) cout << arr[i] << " ";
//     cout << endl;
// }

void initializeConsole()
{
    cout << "\033[0m";
}

void setArraySize(int& N)
{
    cout << "Введите N — количество элементов массива\n" << "N = ";
    while (true)
    {
        if (cin >> N && N > 0)
            break;

        cout << "Некорректное значение N! Повторите ввод: ";
        cin.clear();
    }
    cout << endl;
}

short setMode()
{
    short mode;
    cout << "Выберите способ заполнения массивов:\n"
        << "1. Заполнение от 1 до N по возрастанию\n"
        << "2. Заполнение от N до 1 по убыванию\n"
        << "3. Заполнение случайными числами\n";
    while (true)
    {
        if (cin >> mode && (mode >= 1 && mode <= 3))
            break;

        cout << "Некорректное значение! Повторите ввод: ";
        cin.clear();
    }
    return mode;
}

void printHeader()
{
    cout << "\033[90m"
        << string(70, '-')
        << "\033[0m" << '\n';

    cout << "\033[1;34m"
        << left << setw(25) << "Метод"
        << right << setw(15) << "        Сравнений        "
        << setw(15) << "Свапы     "
        << setw(15) << "Время (мс)"
        << "\033[0m" << '\n';

    cout << "\033[90m"
        << string(70, '-')
        << "\033[0m" << '\n';
}

void printRow(const string& name, const Stats& st, double time)
{
    cout << left << setw(25) << name
        << right << setw(15) << st.comparisons
        << setw(15) << st.swaps
        << setw(15) << fixed << setprecision(3) << time
        << '\n';
}
