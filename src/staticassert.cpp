#include <type_traits>
#include<iostream>
using namespace std;

template <class T>
void swap1(T& a, T& b)
{
    /*static_assert(std::is_copy_constructible<T>::value,
                  "Swap requires copying");
    static_assert(std::is_nothrow_copy_constructible<T>::value
               && std::is_nothrow_copy_assignable<T>::value,
                  "Swap requires nothrow copy/assign");*/
    auto c = b;
    b = a;
    a = c;
}
 
template <class T>
struct data_structure
{
    //static_assert(std::is_default_constructible<T>::value,
                  //"Data Structure requires default-constructible elements");
};
 
struct no_copy
{
    //no_copy ( const no_copy& ) = delete;
    no_copy () = default;
};
 
struct no_default
{
    no_default () = delete;
};
 
int main()
{
    int a = 7, b = 5;
    swap1(a, b);
 
    no_copy nc_a, nc_b;
    swap1(nc_a, nc_b); // 1
 
    data_structure<int> ds_ok;
    data_structure<no_default> ds_error; // 2
    cout<<"dddddd"<<endl;
    return 0;
}