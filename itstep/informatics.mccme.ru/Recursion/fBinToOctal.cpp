#include <iostream>
#include <string>
#include <cmath>
#include <exception>
using namespace std;

int fBinToOctal(string binary, unsigned int i = 0)
{
    int tot = 0;
    if (i < binary.length())
    {
        if (binary[i] == '1')
            tot = pow(2, i);
        else if (!binary[i] == '0')
            throw "String is not formatted in binary";
        return tot + fBinToOctal(binary, ++i);
    }
    return tot;
}

int main() {
    string binary = "";
    getline (cin, binary);
    if (binary.find("-") != string::npos)
    {
       binary.erase(binary.find('-'), 1);
       int dec = fBinToOctal(binary);
       cout << "-" << dec << endl;
    }
    else
    {
    int dec = fBinToOctal(binary);
    cout << dec << endl;
    }
    system("pause");
    return 0;
}