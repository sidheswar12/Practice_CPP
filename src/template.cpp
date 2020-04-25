#include <iostream>

using namespace std;

template<class M>
M GetMax(M a, M b)
{
  M res;
  res = a>b?a:b;
  return res;
}

template<class A, class B>
A GetMin(A a, B b)
{
  A res;
  res = a<b?a:b;
  return res;
}

template<class T>
class myPair
{
  T a, b;
  public:
    myPair(T first, T second)
    {
      a = first;
      b = second;
    }
    T Sum();
};

template <class T>
T myPair<T>::Sum()
{
  T res;
  res = a + b;
  return res;
}

//Template Specialization
template<class SP>
class myClass
{
  SP value;
  public:
    myClass(SP val)
    {
      value = val;
    }
    SP increment()
    {
      return ++value;
    }
};

//Class Template Specialization
template<>
class myClass <char>
{
  char ch;
  public:
    myClass(char c)
    {
      ch = c;
    }
    char upperCase()
    {
      if((ch>='a')&&(ch<='z'))
      {
        ch += 'A'-'a';
      }
      return ch;
    }
};

//Non-type parameters for templates
// sequence template
template<class S, int N>
class sequence
{
  S arr[N];
  public:
    void set (int x, S value);
    S get (int x);
};

template <class S, int N>
void sequence<S,N>::set(int x, S val) 
{
  arr[x]=val;
}

template <class S, int N>
S sequence<S,N>::get(int x) 
{
  return arr[x];
}

int main() 
{
  float x = 5.5;
  float y = 10.5;
  float r = GetMax<float>(x, y);
  cout <<"Max:"<<r<<endl;
  
  r = GetMin<float>(x, y);
  cout <<"Min:"<<r<<endl;

  myPair<int> obj(100, 200);
  cout<<"Sum:"<<obj.Sum()<<endl;

  myClass<int> myVal(7);
  cout<<"Increment Val:"<<myVal.increment()<<endl;

  myClass<char> myChar ('j');
  cout<<"Upper Case:"<<myChar.upperCase()<<endl;


  sequence <int,5> myints;
  sequence <double,5> myfloats;
  myints.set (0,100);
  myfloats.set (1,3.1416);
  cout<<"Int:"<<myints.get(0) <<endl;
  cout<<"Float:"<<myfloats.get(1) <<endl;
  return 0;
}