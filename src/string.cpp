
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main () 
{
   char s1[] = {"Hello World"};
   char s2[] = {"r"};
       
   cout<<strstr(s1,s2)<<endl; // out put is "rld" 
   cout<<strchr(s1, 'W')<<endl;   
   

   return 0;
}