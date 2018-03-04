#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
 
int main(void)
{
    string s, s_sub;
    int i, j;
    getline(cin, s);
    cin >> i >> j;

    // take subs
    s_sub = s.substr(i - 1, j - i + 1);
    reverse(s_sub.begin(), s_sub.end());
    // cout << s_sub << endl;
    //erase subs from str
    s.erase(i - 1, j - i + 1);
    // cout << s << endl;
    s.insert(i - 1, s_sub);

    cout << s;
    
    system("pause");
    return 0;
}

/*
// another way
int main()
{
    cin >> s;

    cin >> i >> j;
    while((j - i + 1) / 2)
    {
        swap(s[i - 1],s[j - 1]);
        i++;
        j--;
    }
    cout << s;
    return 0;
}*/