#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string str;
    getline (cin, str);
    string ans = "";
    for (int i = 0; i < str.length(); ++i)
    {
        for (int j = i + 1; j < str.length(); ++j)
        {
            if (i != j)
            {
                if (str[i] == str[j])
                {
                   ans = str[i]; 
                }   
            }
        }
    }
    cout << ans;

    cin.get();
    return 0;
}
