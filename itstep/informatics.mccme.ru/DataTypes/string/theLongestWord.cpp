#include <iostream>
#include <sstream>
using namespace std;
int main()
{   
    string str, word, max_word;
    int max = 0, count = 0, max_pos = 0;
 
    getline (cin, str);
 
    istringstream iss;
    iss.str(str);
    while (iss >> word)
    {   if (word.length() > max)
        {
            max = word.length();
            // max_pos = count;
            max_word = word;
        }
        count ++;
    }
 
    cout << max_word << endl << max;
    
    cin.get();
    return 0;
}
