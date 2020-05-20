/*What is the difference between operator functions and normal functions?
-------------------------------------------------------------------------
Operator functions are same as normal functions. The only differences are, name of an operator function is always operator keyword followed by symbol of operator and operator functions are called when the corresponding operator is used.
Following is an example of global operator function.
*/

#include<iostream>
class Complex
{
private:
    int real, imag;
public:
    Complex(int r = 0, int i = 0) 
    {
        real = r;
        imag = i;
    }
    void print()
    {
        std::cout<<real<<"+ i"<<imag<<std::endl;
    }
    friend Complex operator + (Complex const &, Complex const &);
};

//gloabl operator overloading function
Complex operator + (Complex const &c1, Complex const &c2)
{
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}