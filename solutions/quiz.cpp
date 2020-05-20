#include<iostream>
int main()
{
	int x{};
 
	// l-value references
	int &ref1{ x }; // A
	int &ref2{ 5 }; // B Error constant value can not be assigned
 
	const int &ref3{ x }; // C
	const int &ref4{ 5 }; // D
 
	// r-value references
	int &&ref5{ x }; // E Error cannot bind rvalue reference of type ‘int&&’ to lvalue of type ‘int’
	int &&ref6{ 5 }; // F
 
	const int &&ref7{ x }; // G Error cannot bind rvalue reference of type ‘const int&&’ to lvalue of type ‘int’
	const int &&ref8{ 5 }; // H
	
	return 0;
}