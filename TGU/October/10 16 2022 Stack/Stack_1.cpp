#include <iostream>
#include <string>
#include <stack>  

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    stack <int> stack;  // ������� ����

    //string str("A+(45-F(X)*(B-C))");

    // ���������� �� �����
    string str;
    ifstream myfile("example.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, str))
        {
            string outputStr("");

            for (int i = 0; i < str.length(); i++)
            {

                if (str[i] == '(')
                {
                    stack.push(i + 1);
                }

                if (str[i] == ')')
                {
                    // �������� ������� ������� �� ����� � ������� � ������
                    outputStr += to_string(stack.top()) + " ";

                    // ������� ������� ������� �� �����
                    stack.pop();

                    // ��������� ���������� ����� ����������� ������
                    outputStr += to_string(i + 1) + "\n";
                }
            }

            ofstream mfile("output.txt");
            if (mfile.is_open())
            {
                mfile << outputStr;
                mfile.close();
            }
            else cout << "�� �������� ������� ����";

            //cout << outputStr;
        }
        myfile.close();
    }

    else cout << "�� �������� ������� ����";

    system("pause");
    return 0;
}