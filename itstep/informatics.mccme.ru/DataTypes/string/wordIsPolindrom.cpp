#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
 
int main(void)
{
    string str, tmp;
    cin >> str;
    tmp = str;
    reverse(str.begin(), str.end());
    if (str == tmp)
        // cout << "yes";
        cout << "YES";
    else
        // cout << "no";
        cout << "NO";
    return 0;
}


/*// with loops
int main()
{
    bool polindrom = true;
    string word;
    cin >> word;
    for (int i = 0; i < word.length(); i++)
        if (word[i] != word[word.length() - 1 - i])
        {
            polindrom = false;
            break;
        }
    cout << (polindrom ? "yes" : "no");
    // cout << (polindrom ? "YES" : "NO");
    return 0;
}*/
