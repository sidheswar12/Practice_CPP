// vector::emplace
#include <iostream>
#include <vector>

using namespace std;

int main ()
{
  vector<int> myvector = {10,20,30};
  
  auto it = myvector.emplace ( myvector.begin()+1, 100 ); //push at begining+1
  myvector.emplace ( it, 200 ); //push at index
  myvector.emplace ( myvector.end(), 300 ); //push at end

  cout << "myvector contains:";
  for (auto& x: myvector)
    cout << ' ' << x;
  cout << endl;

  myvector.emplace_back(30); //push at end

  cout << "myvector contains after emplace_back:";
  for (auto& x: myvector)
    cout << ' ' << x;
  cout << endl;

  return 0;
}
