#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
 
int main(void)
{
    string str, tmp;
    getline(cin, str);
    string str_tmp = "";
    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] != ' ')
        {
            str_tmp += str[i];
        }
    }
    // cout << str_tmp;
    tmp = str_tmp;
    reverse(str_tmp.begin(), str_tmp.end());
    if (str_tmp == tmp)
        cout << "yes";
        // cout << "YES";
    else
        cout << "no";
        // cout << "NO";
    system("pause");
    return 0;
}