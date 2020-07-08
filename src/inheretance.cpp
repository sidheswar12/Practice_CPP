#include<iostream>
using namespace std;
class Duck
{
    int x= 0;
    public:
    Duck()
    {
        cout<<"Duck"<<endl;
    }    
    ~Duck(){}
};
class Quack:Duck
{
    int y = 5;
    public:
    Quack()
    {
        cout<<"Quack Quack"<<endl;
    }
    ~Quack(){}

};

int main()
{
    Duck a;
    Quack b;
    return 0;
}