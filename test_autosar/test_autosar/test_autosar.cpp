﻿// test_autosar.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#define MIN(a,b) a < b ? a : b
#define MAX(a,b) a > b ? a : b

int min(int a, int b)
{
    if (a > b) return b;
    else if (a < b) return a;
}

int max(int a, int b)
{
    if (a < b) return b;
    else if (a > b) return a;
}

void main()
{
    int x1 = 3, x2 = 3;
    int y1 = 5, y2 = 5;
    int x3 = 3, x4 = 3;
    int y3 = 5, y4 = 5;
    printf("MIN(%d, %d) = %d;\n", x1, y1, MIN(x1++, y1));
    printf("MIN(%d, %d) = %d;\n", x1, y1, MIN(++x1, y1));
    printf("min(%d, %d) = %d;\n", x2, y2, min(++x2, y2));
    printf("min(%d, %d) = %d;\n", x2, y2, min(x2++, y2));
    printf("MAX(%d, %d) = %d;\n", x3, y3, MAX(x3++, y3));
    printf("MAX(%d, %d) = %d;\n", x3, y3, MAX(++x3, y3));
    printf("max(%d, %d) = %d;\n", x4, y4, max(++x4, y4));
    printf("max(%d, %d) = %d;\n", x4, y4, max(x4++, y4));
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
