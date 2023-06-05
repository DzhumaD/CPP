
#include <iostream>
#include <cstdlib> // для system
#include <string>

using namespace std;

// Решение упражнений 5 Главы
    // Упражнение 1
        //Указатель на символ
char ch = 'A';
char* c = &ch;
        //массив из 10 целых
int m[10] = {1, 2, 3, 4};
        //ссылка на массив из 10 целых
int (&mm)[] = m;
        //указатель на массив строк
string s[] {"Hello"}; 
string* ss = s;
        //указатель на указатель на символ
char** cc;        
        //целая константа
const int i = 5;
        //указатель на целую константу
const int* ii = &i; 
        //константный указатель на целое
int n = 5;  
int const* nn = &n;

        // Упражнение 2
                //Ограничения на значения указателя char*
char* j;
        // Упражнение 3
char ll[5];
typedef struct user_struct{
        unsigned char b;
        const unsigned char k;
        int** r; //указатель на указатель
        char *l = ll; //указатель на массив
        int* lu[7]; // массив указателей
        int **ko = lu; //указатель на массив уазателей
        int *gt[8][7]; //массив из 8 масисивов по 7 указателей на целые
}my_type;
         // Упражнение 4              
int main()
{
    printf("%s", s[0]);
    cout << "Hello!";
    return 0;
}