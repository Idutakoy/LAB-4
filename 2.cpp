/*����� ������� ����� �� 1 �� N. �� ��� �������� ������� �������� (�� �� �� ������� "���" ��� "�") ����� ������� �������� �����?*/
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
            cout << "������� �����: ";
            cin >> num2;
 
            if( num < num2)
                cout << "������� ������� �����!" << endl;
            if( num > num2)
                cout << "������� ��������� �����!" << endl;
            if( j == 9)
                {cout << endl << "�� �� ������ �������� �����" << num << " c 10 �������!" << endl; break;}
            if( num2 == num )
                {cout << endl << "�� ������� �����! c " << j+1 << "�������" << endl; break;}
        }
 
    cout << "��� ���? (y/n):_\b";
    cin >> ch; cout << endl;
    }
    while( ch != 'n' );
    
 system ("pause");
 return 0;
}
