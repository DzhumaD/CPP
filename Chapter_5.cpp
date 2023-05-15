
#include <iostream>
#include <cstdlib> // для system

using namespace std;

// Решение упражнений 5 Главы
    // Упражнение 1
        //Указатель на символ
char ch = 'A';
char *c = &ch;
        //массив из 10 целых
int m[10] = {1, 2, 3, 4};
        //ссылка на массив из 10 целых

int &mm = m[0];

//m = 5;

int main()
{
    printf("%i",mm);
    return 0;
}