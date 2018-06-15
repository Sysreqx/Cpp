#include <iostream>
#include <string>
using namespace std;
 
int main(void)
{
    string s;
    bool x = true;
    getline(cin, s);
    string s_tmp;
    for (int i = 0; s.length() - 1 > i; ++i) {
        while (s[i] != '.' || s[i] != s.end())
        {
            s_tmp += s[i];
        }
        if (s_tmp < 0 && 255 < s_tmp)
        {
            x = false;
        }
        if (s[i] == '.')
        {
            s_tmp = 0;
        }
    }
    if (x)
        cout << 1;
    else
        cout << 0;
    
    system("pause");
    return 0;
}