
#include <iostream>
#include <cstdlib> // для system
#include <string>

using namespace std;

// Решение упражнений 5 Главы
    // Упражнение 1
        //Указатель на символ
char ch = 'A';
char *c = &ch;
        //массив из 10 целых
int m[10] = {1, 2, 3, 4};
        //ссылка на массив из 10 целых
int (&mm)[] = m;
        //указатель на массив строк
string *s {"1"}; 


int main()
{
    printf("%i",mm[0]);
    return 0;
}