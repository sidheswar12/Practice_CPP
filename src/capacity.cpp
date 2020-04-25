// comparing size, capacity and max_size
/*
Description: myvector.capacity() will return size of the vector with power of 2. 
i.e. if vector size 4, 6, 8, 10, 50, 65, 128 then the capacity must be 
4, 8, 8, 16, 64, 128, 128 respectively
*/
#include <iostream>
#include <vector>

using namespace std;
int main ()
{
  vector<int> myvector;

  for (int i=0; i<128; i++) myvector.push_back(i);

  cout << "size: " << (int) myvector.size() << endl;
  cout << "capacity: " << (int) myvector.capacity() << endl;
  cout << "max_size: " << (int) myvector.max_size() << endl;
  return 0;
}