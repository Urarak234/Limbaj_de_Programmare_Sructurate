#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int Pell(int);

int main()
{
    cout << "Proiect ne. 1, elaborat de Porcescu Dmitrii" << endl;
    cout << "Tema: Numere Pell" << endl;

    int numarMin, numarMax, barrier;
    int sum = 0;
    int aux = 0;

    cout << "Introduceti de la ce numar si pina la ce numar o sa prelucreze programmul: ";
    cin >> numarMin >> numarMax;                 // Вводим интервал для проверки
    cout << "\nIntroduceti cite numere vreti sa afisati: ";
    cin >> barrier;   // Вводим ограничение по выводу чисел.

    int Min = numarMax;
    int Max = 0;

    cout << "\nNumerele lui Pell:" << endl;

    for(int i = numarMin; i < numarMax; i++)    // Индетифицируем все числа Пелла, находящиеся в заданном интервалле
    {
        if(i == 0) {
        //cout << "0" << endl;
    }
    else {
        if(i == 1) {
            //cout << "1" << endl;
        }
        if(Pell(i))                             // Выявляем максимальное и минимальное число Пелла в интервале.
        {
            if(Max < i)
            {
                Max = i;
            }
            if(Min > i)
            {
                Min = i;
            }
            sum ++;
           // cout << i << endl;
        }
    }
    }
    //cin >> barrier;
    for(numarMin; numarMin < numarMax; numarMin++)// Проверить если число является числом Пелл'a.
    {
        if(Pell(numarMin))
        {
            if(aux < barrier)                     // Выводим только заданное ограниченное колличество чисел
            {
                cout << "\n" << numarMin << " - Numar din intervalul dat"<< endl;
                aux++;
            }
        }
    }

    cout << "\n" <<"Min = " << Min << endl;
    cout <<"Max = " << Max << endl;
    cout  << "\n" <<"Total prelucrat: " << sum;

    return 0;
}

int Pell(int n)
{
    int a = 0;
    int b = 1;
    int s;

    s = a + b * 2;
    while(s < n)
    {
        a = b;
        b = s;
        s = a + b * 2;
    }
    return s == n;
}
