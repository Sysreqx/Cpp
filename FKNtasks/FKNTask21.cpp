#include <iostream>

using namespace std;

int main()
{
    //���������� ��� ������
    int N = 25;
    int M = 3;

    // ������� ������ � ����������
    cout << "Vvedite kolichestvo cifr v elochke (N): ";
    cin >> N;
    
    // ������� ������ � ����������
    cout << "Vvedite shirinu elochki (M): ";
    cin >> M;

    // ������ �������, ����� �������� �����.
    int cnt = 0;
    // ������ ����� ����� � ����� ������� �������� ������.
    bool trigger = false;

    // ���� 1 �� ���������� �����
    if (M == 1)
    {
        while (cnt < N)
        {
            cout << cnt << endl;
            cnt++;
        }
    }

    // ������� ������� ����� �������, ��� ������� ����������
    if (M > 1)
    {
        M--;
    }
            
    // ������� ����� �����, ����� ��� ��������� ������
    //cout << "*" << endl;
    cout << cnt << endl;
    cnt++;

    // �������� ����� ����, ������� ������ N
    while (cnt <= N)
    {
        // ��������� �� ����������
        if (trigger == false)
        {
            // ������ ������
            for (int i = M - 1; i >= 0; i--)
            {
                for (int j = M; j >= i; j--)
                {
                    //cout << "*";
                    cout << cnt << " ";

                    // ���� �������� N, �� ��������� ���������
                    if (cnt == N )
                    {
                        return 0;
                    }

                    cnt++;
                }
                cout << endl;

                // ��� �������� ����, ����������� ������, ����� ��������� �� �����������
                if (i == 0)
                {
                    trigger = true;
                }
            }
            // ������ �����
        }

        // ��������� �� �����������
        if (trigger)
        {
            // ������ ������
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
            // ������ �����
        }
    }

    return 0;
}