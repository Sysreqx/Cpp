#include <iostream>
#include <string>
#include <cmath>
#include <locale>
#include <vector>

std::string toBinary(int n)
{
	std::string r;
    while(n!=0){r=(n%2==0 ?"0":"1")+r; n/=2;}
    if (r.size() == 5)
    {
    	r = "0" + r;
    }
    if (r.size() == 6)
    {
    	r = "0" + r;
    }
    if (r.size() == 7)
    {
    	r = "0" + r;
    }
    return r;
}

int main()
{
	std::string message;
	std::cin >> message;
	std:: message_bin[message.length()], message_hex[message.length() / 2];
	for (int i = 0; i < message.length(); i++)
	{
		//строку в бинарное число
		std::string temp = (toBinary((int)message[i]));
		std::cout << temp<< std::endl;
		message_bin[i] = temp;
	}
	std::cout << std::endl;

	for (int i = 0, j = 0; i < message.length(); i+=2, ++j)
	{
		message_hex[j] = message_bin[i] + message_bin[i + 1];
		std::cout << message_hex[j] << std::endl;
	}
	std::cout << std::endl;

	//позиции 1, 2, 4, 8, 16
	message_hex.insert(0,  "0");
	message_hex.insert(1,  "0");
	message_hex.insert(3,  "0");
	message_hex.insert(7,  "0");
	message_hex.insert(15, "0");

	for (j = 0; i < message_hex.length(); ++j)
	{
		std::cout << message_hex[j] << std::endl;
	}

	system("pause");
	return 0;
}
