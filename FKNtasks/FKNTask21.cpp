#include <iostream>

using namespace std;

int main()
{
    // Переменные для данных, 
    int cnt, newLine, n, m;
    bool trigger;


    newLine = 1;
    cnt = 0;
    trigger = true;

    // Считать данные с клавиатуры
    cout << "Vvedite kolichestvo cifr v elochke (N): (primer 99)";
    cin >> n;

    // Считать данные с клавиатуры
    cout << "Vvedite shirinu elochki (M): (primer 3)";
    cin >> m;

    /* n = 99;
     m = 3;*/

    for (int i = 1; i <= n; i++)
    {
        // Выводим число
        cout << i << ' ';

        // Увеличиваем счетчик
        cnt++;

        // Проверяем, если счетчик равен переменной
        if (cnt == newLine)
        {
            // , то переносим на новую строку
            cout << endl;

            // Если переменная равна ширине елочки
            if (newLine == m)
            {
                // Активируем тригер
                trigger = true;
                // Увеличиваем ширину елочки
                //m++; // 22
            }
            else if (newLine == 1) {
                // Как только переменная достигает единицы, тригер деактивируем
                trigger = false;
            }

            // Если переменная больше или равна единицы, тригер деактивирован, увеличиваем переменную
            if ((newLine >= 1) && (trigger == false))
            {
                newLine++;
            }
            else if ((newLine <= m) && (trigger == true))
            {
                // Если переменная меньше или равна ширине елочки, тригер активирован, то уменьшаем переменную
                newLine--;
            }

            // Сбрасываем счетчик
            cnt = 0;
        }

    }

    cout << endl;

    return 0;
}