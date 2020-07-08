#include<iostream>
#include<string>
#include<vector>
#include<map>

using namespace std;

class Clss
{
    int x[100];
    public:
        Clss(): x{0,1,2,3} 
        {
            for(auto i=0;i<4;i++)
            {
                cout<<x[i]<<"  ";
            }
            cout<<endl;
        }
};

class Clss1
{
    char cs='A';
    string s;
    double d;
    char *p;
    int y[5];
    public:
    Clss1() : s("abc"), d(0.0), p(&cs), y{1,2,3,4} 
    {
        for(auto i=0;i<4;i++)
        {
            cout<<y[i]<<"  ";
        }
        cout<<endl;
        cout<<"D:"<<d<<" "<<"S:"<<s<<" "<<"P:"<<*p<<endl;
    }
};

class Clss2
{
    int x=7; //class member initializer
    public:
        Clss2()
        {
            cout<<"Class without param: "<<this->x<<endl;
        } //x is initialized to 7 when the default ctor is invoked
        Clss2(int y) : x(y) 
        {
            cout<<"Class with param: "<<this->x<<endl;
        } //overrides the class member initializer        
};


int sum(const std::initializer_list<int>& list) 
{
  int total = 0;
  for (auto& e : list) 
  {
    total += e;
  }
  return total;
}


int main(int argc, char **argv)
{
    int a{0};//initilization
    string s{"hello"};//initilization
    string s2{s}; //copy construction
    vector <string> vs{"alpha", "beta", "gamma"};//similar like push_back
    map<string, string> stars 
    { {"Superman", "+1 (212) 545-7890"}, 
    {"Batman", "+1 (212) 545-0987"}}; //similar like insert
    
    double *pd= new double [3] {0.5, 1.2, 12.99};
    Clss initobj;
    Clss1 initobj1;

    Clss2 obj;
    Clss2 obj1(5);

    auto list = {3, 2, 1};
    int tot = 0;
    tot = sum(list); // == 6
    tot = sum({1, 2, 3}); // == 6
    tot = sum({}); // == 0

    auto x = std::initializer_list<int> {1, 2, 3};
    for(auto i:x)
    {
        cout<<i;
    }
    cout<<endl;

    return 0;
}

