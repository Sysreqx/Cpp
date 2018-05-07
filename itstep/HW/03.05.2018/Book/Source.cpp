#include "Book.h"
#include <ctime>

std::string rAuthor();
std::string rBookName();
std::string rPublisher();
int rYear();
int rNumberOfPages();

int main()
{
	srand(time(0));
	Book b1(rAuthor(), rBookName(), rPublisher(), rYear(), rNumberOfPages());
	Book b2(rAuthor(), rBookName(), rPublisher(), rYear(), rNumberOfPages());
	Book b3(rAuthor(), rBookName(), rPublisher(), rYear(), rNumberOfPages());
	Book b4(rAuthor(), rBookName(), rPublisher(), rYear(), rNumberOfPages());
	Book b5(rAuthor(), rBookName(), rPublisher(), rYear(), rNumberOfPages());
	Book b6(rAuthor(), rBookName(), rPublisher(), rYear(), rNumberOfPages());
	Book b7(rAuthor(), rBookName(), rPublisher(), rYear(), rNumberOfPages());
	Book b8(rAuthor(), rBookName(), rPublisher(), rYear(), rNumberOfPages());
	Book b9(rAuthor(), rBookName(), rPublisher(), rYear(), rNumberOfPages());
	std::vector<Book> b = { b1, b2, b3, b4, b5, b6, b7, b8, b9 };
	//список книг заданного автора;
	std::string Author = rAuthor();
	std::cout << Author << ": " << std::endl;
	for (int i = 0; i < b.size(); i++)
	{
		if (b[i].getAuthor() == Author)
		{
			std::cout << "\t" << b[i].getBookName() << std::endl;
		}
	}
	std::cout << std::endl << "-------------\n";
	//список книг, выпущенных заданным издательством;
	std::string Publisher = rPublisher();
	std::cout << Publisher << ": " << std::endl;
	for (int i = 0; i < b.size(); i++)
	{
		if (b[i].getPublisher() == Publisher)
		{
			std::cout << "\t" << b[i].getBookName() << std::endl;
		}
	}
	std::cout << std::endl << "-------------\n";
	//список книг, выпущенных после заданного года.*/
	int Year = rYear();
	std::cout << std::to_string(Year) << ": " << std::endl;
	for (int i = 0; i < b.size(); i++)
	{
		if (b[i].getYear() > Year)
		{
			std::cout << "\t" << b[i].getBookName() << std::endl;
		}
	}
	std::cout << std::endl << "-------------\n";

	system("pause");
	return 0;
}

std::string rAuthor()
{
	std::string Author;
	int tmp = rand() % 6;
	if (tmp == 1)
		Author = "Kazi Nazrul Islam";
	if (tmp == 2)
		Author = "Immanuel Kant";
	if (tmp == 3)
		Author = "Julie Kagawa";
	if (tmp == 4)
		Author = "Kai Zen";
	if (tmp == 5)
		Author = "Franz Kafka";
	if (tmp == 0)
		Author = "Paul Kalanithi";
	return Author;
}

std::string rBookName()
{
	std::string BookName;
	int tmp = rand() % 6;
	if (tmp == 0)
		BookName = "Karunamaya Goswami";
	if (tmp == 1)
		BookName = "Thoughts on the True Estimation of Living Forces";
	if (tmp == 2)
		BookName = "The Iron King";
	if (tmp == 3)
		BookName = "Wydeawake";
	if (tmp == 4)
		BookName = "Amerika or Der Verschollene";
	if (tmp == 5)
		BookName = "When Breath Becomes Air";
	return BookName;
}

std::string rPublisher()
{
	int tmp = rand() % 5;
	std::string Publisher;
	if (tmp == 0)
		Publisher = "Penguin Random House";
	if (tmp == 1)
		Publisher = "Hachette";
	if (tmp == 2)
		Publisher = "HarperCollins";
	if (tmp == 3)
		Publisher = "Simon & Schuster";
	if (tmp == 4)
		Publisher = "Macmillan.";
	return Publisher;
}

int rYear()
{
	int Y = rand() % 218 + 1801;
	return Y;
}

int rNumberOfPages()
{
	int P = rand() % 501 + 200;
	return P;
}
