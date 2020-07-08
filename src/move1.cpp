#include<iostream>
#include<string>

using namespace std;

class Widget
{
    private:
        int i{0};
        string s{};
        int *ptr {nullptr};
    public:
        Widget(Widget&& w):i(move(w.i)), s(move(w.s)),ptr(move((w.ptr)))
        {
            w.ptr = nullptr;
            cout<<"Move"<<endl;
        }
};

int main(int argc, char **argv)
{
    cout<<"Test"<<endl;
    string str = "SSSS";
    int a=10;    
    //Widget c(a, "sss", &a); // ctor
    //Widget cc(std::move(c));
    //wt = new Widget(std::move(10), move(str), move(&a)); // move ctor
    return 0;
}