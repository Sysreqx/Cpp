#include "Product.h"
#include <ctime>

std::string rProductName();
std::string rManufacturer();
int rY();
int rM();
int rD();
std::string rShelfLife();
double rPrice();

int main()
{
	srand(time(0));
	Product p1(rProductName(), rManufacturer(), rY(), rM(), rD(), rPrice());
	Product p2(rProductName(), rManufacturer(), rY(), rM(), rD(), rPrice());
	Product p3(rProductName(), rManufacturer(), rY(), rM(), rD(), rPrice());
	Product p4(rProductName(), rManufacturer(), rY(), rM(), rD(), rPrice());
	Product p5(rProductName(), rManufacturer(), rY(), rM(), rD(), rPrice());
	Product p6(rProductName(), rManufacturer(), rY(), rM(), rD(), rPrice());
	Product p7(rProductName(), rManufacturer(), rY(), rM(), rD(), rPrice());
	Product p8(rProductName(), rManufacturer(), rY(), rM(), rD(), rPrice());
	Product p9(rProductName(), rManufacturer(), rY(), rM(), rD(), rPrice());
	Product p10(rProductName(), rManufacturer(), rY(), rM(), rD(), rPrice());
	std::vector<Product> p = { p1, p2, p3, p4, p5, p6, p7, p8, p9, p10 };
	//a) список товаров для заданного наименования;
	std::string PN = rProductName();
	std::cout << PN << std::endl;
	for (int i = 0; i < p.size(); i++)
	{
		if (p[i].getProductName() == PN)
		{
			std::cout << p[i];
		}
	}
	std::cout << "\n--------------------------\n";
	//b) список товаров для заданного наименования, цена которых не превосходит заданную;
	PN = rProductName();
	int curPrice = rPrice();
	std::cout << PN << std::endl;
	for (int i = 0; i < p.size(); i++)
	{
		if (p[i].getProductName() == PN && curPrice <= p[i].getPrice())
		{
			std::cout << p[i];
		}
	}
	std::cout << "\n--------------------------\n";
	//c) список товаров, срок хранения которых больше заданного.
	std::string SL = rShelfLife();
	std::cout << SL << std::endl;
	for (int i = 0; i < p.size(); i++)
	{
		if (p[i].getShelfLife() > SL)
		{
			std::cout << p[i];
		}
	}
	std::cout << std::endl;

	system("pause");
	return 0;
}

std::string rProductName()
{
	//shoes, book, green tea, cell phone, laptop, headphones, wallpaper, battery, bed, carpet;
	std::string PN;
	int iPN = rand() % 10;
	if (iPN == 0)
		PN = "shoes";
	if (iPN == 1)
		PN = "book";
	if (iPN == 2)
		PN = "green tea";
	if (iPN == 3)
		PN = "cell phone";
	if (iPN == 4)
		PN = "laptop";
	if (iPN == 5)
		PN = "headphones";
	if (iPN == 6)
		PN = "wallpaper";
	if (iPN == 7)
		PN = "battery";
	if (iPN == 8)
		PN = "bed";
	if (iPN == 9)
		PN = "carpet";
	return PN;
}

std::string rManufacturer()
{
	std::string M;
	int iM = rand() % 3;
	if (iM == 0)
		M = "China";
	if (iM == 1)
		M = "Kazakhstan";
	if (iM == 2)
		M = "Mexico";
	return M;
}

int rY()
{
	int Y = rand() % 11;
	return Y;
}

int rM()
{
	int M = rand() % 12;
	return M;
}

int rD()
{
	int D = rand() % 31;
	return D;
}

std::string rShelfLife()
{
	std::string SL;
	int Y = rY();
	int M = rM();
	int D = rD();
	SL = std::to_string(Y) + "y";
	if (M < 10)
		SL += "0";
	SL += std::to_string(M) + "m";
	if (D < 10)
		SL += "0";
	SL += std::to_string(D) + "d";
	return SL;
}

double rPrice()
{
	double P = rand() % 10000;
	return P;
}
