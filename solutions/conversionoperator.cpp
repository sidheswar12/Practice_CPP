/*Important points about operator overloading
1) For operator overloading to work, at least one of the operands must be a user defined class object.

2) Assignment Operator: Compiler automatically creates a default assignment operator with every class. 
The default assignment operator does assign all members of right side to the left side and works fine most 
of the cases (this behavior is same as copy constructor). See this for more details.

3) Conversion Operator: We can also write conversion operators that can be used to convert one type to another type.
Overloaded conversion operators must be a member method. Other operators can either be member method or global method.

4) Any constructor that can be called with a single argument works as a conversion constructor, 
means it can also be used for implicit conversion to the class being constructed.
*/


#include <iostream> 
class Fraction 
{ 
    int num, den; 
public: 
    Fraction(int n,  int d) 
    { 
        num = n; den = d; 
    } 
  
    // conversion operator: return float value of fraction 
    operator float() const 
    { 
        return float(num) / float(den); 
    } 
}; 
  
int main() 
{ 
    Fraction f(5, 3); 
    float val = f; 
    std::cout << val<<std::endl; 
    return 0; 
} 
