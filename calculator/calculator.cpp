#include <iostream>

int oel()
{
	std::cout << "Please enter your bith date: ";
	int x{};
	int y{};
	int z{};
	std::cin >> x >> y >> z;
	int day{ y * 30 };
	int tday{ day + x };
	int a{};
	int b{};
	int c{}; 
	std::cout << "Please enter todays date   : ";
	std::cin >> a >> b >> c;
	int k{ b * 30 };
	int m{ k + a };
	int l{ c - z };
	int qw{ l / 4 };
	int oo{ l - qw };
	int p{ m - tday };
	int final{ (oo * 365) + (qw * 366) + p };
	return final;
}


int main()
{
	
	int mumber{ oel() };
	std::cout << "You have lived for " << mumber << " days         :";
	return 0;

}