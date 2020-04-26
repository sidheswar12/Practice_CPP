// Loops
#include <iostream>
#include <string>

using namespace std;

int main ()
{
  string str {"Hello!"};
  for (char c : str)
  {
    cout << "[" << c << "]";
  }
  cout << endl;

  char arr[] = {'A', 'B', 'C', 'D'};
  for(auto c : arr)
  {
      cout << "[" << c << "]";
  }
  cout <<endl;  
}