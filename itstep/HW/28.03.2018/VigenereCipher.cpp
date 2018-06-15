#include <iostream>
#include <string>
#include <cmath>
#include <locale>

std::string Encryption(std::string &Plaintext, std::string &keywordEdit, std::string &encrypted_in_func)
{
	for (int i = 0; i < Plaintext.length(); ++i)
	{
		encrypted_in_func[i] = ((int)Plaintext[i] + (int)keywordEdit[i]) % 26 + 65;
	}

	return encrypted_in_func;
}

std::string Decryption(std::string &Plaintext, std::string &keywordEdit, std::string &decrypted_in_func, std::string &encrypted_in_func)
{
	for (int i = 0; i < Plaintext.length(); ++i)
	{
		decrypted_in_func[i] = ((int)encrypted_in_func[i] - (int)keywordEdit[i] + 26) % 26 + 65;;
	}

	return decrypted_in_func;
}

int main()
{
	std::string Plaintext, Key, encrypted, decrypted, keywordEdit, encrypted_in_func, decrypted_in_func;
	std::cin >> Plaintext >> Key;

	for (int i = 0; i < Plaintext.length(); i++)
	{
		keywordEdit[i] = std::toupper(Key[i % (Key.length())]);
		Plaintext[i] = std::toupper(Plaintext[i]);
		// std::cout << keywordEdit[i]; 
	}

	std::cout << Encryption(Plaintext, keywordEdit, encrypted_in_func);
	for (int i = 0; i < Plaintext.length(); ++i)
	{
		std::cout << encrypted_in_func[i];
	}
	std::cout << std::endl;

	std::cout << Decryption(Plaintext, keywordEdit, decrypted_in_func, encrypted_in_func);
	for (int i = 0; i < Plaintext.length(); ++i)
	{
		std::cout << decrypted_in_func[i];
	}
	std::cout << std::endl;
/*
	ATTACKATDAWN
	LEMON
	*/
	system("pause");
	return 0;
}