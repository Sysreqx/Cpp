#include <iostream>
#include <string>
using namespace std;
 
int main(void)
{
    string s, s_out = "";
    int k;
    getline(cin, s);
    cin >> k;

    for (int i = 0; i < s.length(); ++i)
    {
        int i_tmp = 0;
        char c;
        //string to int
        i_tmp = (int)s[i];
        i_tmp -= k;
        if (i_tmp < 65)
            //int to char
            c = (i_tmp + 26);
        else 
            c = (i_tmp);
        // cout << c << " ";       
        s_out += c;
    }

    cout << s_out;
    
    system("pause");
    return 0;
}