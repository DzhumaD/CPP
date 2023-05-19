
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
string s[] {"Hello"}; 
string *ss = s;
        //указатель на указатель на символ
char *cc = c;        
        //целая константа
const int i = 5;
        //указатель на целую константу
const int *ii = &i; 
               
int main()
{
    printf("%s", s[0]);
    cout << "Hello!";
    return 0;
}