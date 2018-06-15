#pragma once
#include <iostream>
#include <string>
#include <vector>

class Book
{/*
Book: Автор, Название, Издательство, Год, Количество, страниц.
	Создать массив объектов.Вывести :
	a) список книг заданного автора;
	b) список книг, выпущенных заданным издательством;
	c) список книг, выпущенных после заданного года.*/
private:
	std::string Author, BookName, Publisher;
	int Year, NumberOfPages;
public:
	//set
	void setAuthor(std::string Author);
	void setBookName(std::string BookName);
	void setPublisher(std::string Publisher = "Penguin Random House");
	void setYear(int Year = 2018);
	void setNumberOfPages(int NumberOfPages = 450);
	//get
	std::string getAuthor();
	std::string getBookName();
	std::string getPublisher();
	int getYear();
	int getNumberOfPages();
	//constructor
	Book(std::string Author, std::string BookName, std::string Publisher, int Year, int NumberOfPages);
	~Book();
};

