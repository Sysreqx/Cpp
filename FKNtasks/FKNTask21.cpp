#include <iostream>

using namespace std;

int main()
{
    // ���������� ��� ������, 
    int cnt, newLine, n, m;
    bool trigger;


    newLine = 1;
    cnt = 0;
    trigger = true;

    // ������� ������ � ����������
    cout << "Vvedite kolichestvo cifr v elochke (N): (primer 99)";
    cin >> n;

    // ������� ������ � ����������
    cout << "Vvedite shirinu elochki (M): (primer 3)";
    cin >> m;

    /* n = 99;
     m = 3;*/

    for (int i = 1; i <= n; i++)
    {
        // ������� �����
        cout << i << ' ';

        // ����������� �������
        cnt++;

        // ���������, ���� ������� ����� ����������
        if (cnt == newLine)
        {
            // , �� ��������� �� ����� ������
            cout << endl;

            // ���� ���������� ����� ������ ������
            if (newLine == m)
            {
                // ���������� ������
                trigger = true;
                // ����������� ������ ������
                //m++; // 22
            }
            else if (newLine == 1) {
                // ��� ������ ���������� ��������� �������, ������ ������������
                trigger = false;
            }

            // ���� ���������� ������ ��� ����� �������, ������ �������������, ����������� ����������
            if ((newLine >= 1) && (trigger == false))
            {
                newLine++;
            }
            else if ((newLine <= m) && (trigger == true))
            {
                // ���� ���������� ������ ��� ����� ������ ������, ������ �����������, �� ��������� ����������
                newLine--;
            }

            // ���������� �������
            cnt = 0;
        }

    }

    cout << endl;

    return 0;
}