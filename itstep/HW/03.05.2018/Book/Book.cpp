#include "Book.h"

std::string Book::getPublisher()
{
	return Publisher;
}

int Book::getYear()
{
	return Year;
}

int Book::getNumberOfPages()
{
	return NumberOfPages;
}

Book::Book(std::string Author, std::string BookName, std::string Publisher, int Year, int NumberOfPages)
{
	setAuthor(Author);
	setBookName(BookName);
	setPublisher(Publisher);
	setYear(Year);
	setNumberOfPages(NumberOfPages);
}

Book::~Book()
{
}

void Book::setAuthor(std::string Author)
{/*
	"Kazi Nazrul Islam"
		"Immanuel Kant"
		"Julie Kagawa"
		"Kai Zen"
		"Franz Kafka"
		"Paul Kalanithi"*/
	this->Author = Author;
}

void Book::setBookName(std::string BookName)
{/*
	"Karunamaya Goswami"
		"Thoughts on the True Estimation of Living Forces"
		"The Iron King"
		"Wydeawake"
		"Amerika or Der Verschollene"
		"When Breath Becomes Air"*/
	this->BookName = BookName;
}

void Book::setPublisher(std::string Publisher)
{
	//Penguin Random House, Hachette, HarperCollins, Simon & Schuster and Macmillan.
	this->Publisher = Publisher;
}

void Book::setYear(int Year)
{
	if (Year > 2018)
		Year = 2018;
	this->Year = Year;
}

void Book::setNumberOfPages(int NumberOfPages)
{
	this->NumberOfPages = NumberOfPages;
}

std::string Book::getAuthor()
{
	return Author;
}

std::string Book::getBookName()
{
	return BookName;
}
