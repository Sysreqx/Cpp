#include <iostream>

using namespace std;

int main()
{
    // ¬се как в предыдущей задаче, добавил только увеличение M, когда доходит до момента роста елочки.
    int N = 51;
    int M = 1;

    cout << "Vvedite kolichestvo cifr v elochke (N): ";
    cin >> N;

    int cnt = 1;
    bool trigger = false;


    //cout << "*" << endl;
    cout << cnt << endl;
    cnt++;

    while (cnt <= N)
    {
        if (trigger == false)
        {
            for (int i = M - 1; i >= 0; i--)
            {
                for (int j = M; j >= i; j--)
                {
                    //cout << "*";
                    cout << cnt << " ";

                    if (cnt == N)
                    {
                        return 0;
                    }

                    cnt++;
                }
                cout << endl;

                if (i == 0)
                {
                    trigger = true;
                    /*M++;*/
                }
            }
        }

        if (trigger)
        {
            for (int i = M - 1; i >= 0; i--)
            {
                for (int j = 0; j <= i; j++)
                {
                    //cout << "*";
                    cout << cnt << " ";

                    if (cnt == N)
                    {
                        return 0;
                    }

                    cnt++;
                }
                cout << endl;

                if (i == 0)
                {
                    trigger = false;
                    M++;
                }
            }
        }
    }

    return 0;
}