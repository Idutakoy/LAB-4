/*Хтось загадав число від 1 до N. За яку найменшу кількість запитань (на які він відповідає "так" або "ні") можна вгадати задумане число?*/
#include <iostream>
#include <conio.h>
#include <time.h>
 
using namespace std;
 
int main ()
{
    setlocale(LC_ALL,"Russian"); 
 
    srand ( time(NULL) );
    int num=rand() % 100;
 
    char ch=' ';
    int num2=0;
 
    do
    {
        for( int j=0 ; j<10 ; ++j )
        {
            cout << "Введите число: ";
            cin >> num2;
 
            if( num < num2)
                cout << "Слишком большое число!" << endl;
            if( num > num2)
                cout << "Слишком маленькое число!" << endl;
            if( j == 9)
                {cout << endl << "Ви не смогли отгадать число" << num << " c 10 попиток!" << endl; break;}
            if( num2 == num )
                {cout << endl << "Ви угадали число! c " << j+1 << "попиток" << endl; break;}
        }
 
    cout << "Еще раз? (y/n):_\b";
    cin >> ch; cout << endl;
    }
    while( ch != 'n' );
    
 system ("pause");
 return 0;
}
