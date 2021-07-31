#include <iostream>

using namespace std;

int main()
{
    //Переменные для данных
    int N = 25;
    int M = 3;

    // Считать данные с клавиатуры
    cout << "Vvedite kolichestvo cifr v elochke (N): ";
    cin >> N;
    
    // Считать данные с клавиатуры
    cout << "Vvedite shirinu elochki (M): ";
    cin >> M;

    // Задать счетчик, чтобы выводить цифры.
    int cnt = 0;
    // Тригер чтобы знать в какую сторону рисовать елочку.
    bool trigger = false;

    // Если 1 то отрисовать сразу
    if (M == 1)
    {
        while (cnt < N)
        {
            cout << cnt << endl;
            cnt++;
        }
    }

    // Условие добавил после решения, для отловки исключений
    if (M > 1)
    {
        M--;
    }
            
    // Вывести сразу число, потом уже двигаться дальше
    //cout << "*" << endl;
    cout << cnt << endl;
    cnt++;

    // Выводить числа пока, счетчик меньше N
    while (cnt <= N)
    {
        // Двигаемся на увеличение
        if (trigger == false)
        {
            // Елочка начало
            for (int i = M - 1; i >= 0; i--)
            {
                for (int j = M; j >= i; j--)
                {
                    //cout << "*";
                    cout << cnt << " ";

                    // Если достигли N, то завершить программу
                    if (cnt == N )
                    {
                        return 0;
                    }

                    cnt++;
                }
                cout << endl;

                // Как достигли нуля, переключить тригер, чтобы двигаться на возрастание
                if (i == 0)
                {
                    trigger = true;
                }
            }
            // Елочка конец
        }

        // Двигаться на возрастание
        if (trigger)
        {
            // Елочка начало
            for (int i = M - 1; i >= 0; i--)
            {
                for (int j = 0; j <= i; j++)
                {
                    //cout << "*";
                    cout << cnt << " ";

                    if (cnt == N )
                    {
                        return 0;
                    }

                    cnt++;
                }
                cout << endl;

                if (i == 0)
                {
                    trigger = false;
                }
            }
            // Елочка конец
        }
    }

    return 0;
}