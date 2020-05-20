#include <iostream>
void fun(const int &lref) // l-value arguments will select this function
{
	std::cout << "l-value reference to const\n";
}
 
void fun(int &&rref) // r-value arguments will select this function
{
	std::cout << "r-value reference\n";
}
 
int main()
{
	int x{ 5 };
	fun(x); // l-value argument calls l-value version of function
	fun(7); // r-value argument calls r-value version of function

    int &&ref{ 5 };
	fun(ref);
 
	return 0;
}