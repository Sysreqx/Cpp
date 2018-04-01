#include <iostream>
#include <string>

string Encryption()

int main()
{
	std::string Plaintext, Key, encrypted, decrypted, keywordEdit;
	std::cin >> Plaintext >> Key;
	
	for (int i = 0; i < Plaintext.length(); i++)
	{
		keywordEdit[i] = Key[i % (Key.length())];
		// std::cout << keywordEdit[i]; 
	}

	for (int i = 0; i < Plaintext.length(); ++i)
	{
		encrypted[i] = ((int)Plaintext[i] + (int)keywordEdit[i]) % 26 + 65;
	}

	std::cout << std::endl;
	for (int i = 0; i < Plaintext.length(); i++)
	{
		std::cout << encrypted[i];
	}
	std::cout << std::endl;

	// for (int i = 0; i < Plaintext.length(); ++i)
	// {
	// 	decrypted[i] = 
	// }

	// for (int i = 0; i < Plaintext.length(); i++)
	// {
	// 	std::cout << decrypted[i];
	// }
	// std::cout << std::endl;

	//ATTACKATDAWN
	//LEMON
	system("pause");
	return 0;
}