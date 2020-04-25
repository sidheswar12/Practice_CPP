// vector::reserve
/* This is example of capacity and reserve function.
o/p explain how both functions works*/


#include <iostream>
#include <vector>

using namespace std;

int main ()
{
  vector<int>::size_type sz;

  vector<int> vect;
  sz = vect.capacity();
  cout << "Pushing element to vector:"<<endl;
  for (int i=0; i<100; ++i) 
  {
    vect.push_back(i);
    if (sz!=vect.capacity()) 
    {
      sz = vect.capacity();
      cout << "Capacity changed: " << sz << endl;
    }
  }

  vector<int> vect1;
  sz = vect1.capacity();
  vect1.reserve(100); //capacity will not increase beyond 100    
  cout << "Pushing element to vector:"<<endl;
  for (int i=0; i<100; ++i) 
  {
    vect1.push_back(i);
    if (sz!=vect1.capacity()) //Initial condition will satify 
    {
      sz = vect1.capacity(); 
      cout << "capacity changed: " << sz << endl;
    }
  }
  return 0;
}