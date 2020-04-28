
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main () 
{
    char s1[] = {"Hello World"};
    char s2[] = {"r"};
        
    cout<<strstr(s1,s2)<<endl; // output is "rld" 
    cout<<strchr(s1, 'W')<<endl;   // output is "World"

    string orbits ("365.2434 29.5354");
    string::size_type size;// alias of size_t
    
    // String to double
    double earth = stod (orbits, &size);
    cout<<"size: " <<size<<endl; //size of first double number from string
    double moon = stod (orbits.substr(size)); // Find next double starting from size index
    cout<<"Earth: " <<earth<<endl;
    cout<<"Moon: "<<moon<<endl;

    // String to float
    float eth = stof (orbits, &size);
    cout<<"size: " <<size<<endl; //size of first double number from string
    float mn = stof (orbits.substr(size)); // Find next double starting from size index
    cout<<"Earth: " <<eth<<endl;
    cout<<"Moon: "<<mn<<endl;


    // String to int/hex/bin/octal
    string str_dec = "2001, A system Program";
    string str_hex = "40c3";
    string str_bin = "-10010110001";
    string str_auto = "0x7f";

    int i_dec = stoi (str_dec,&size);
    int i_hex = stoi (str_hex,nullptr,16);
    int i_bin = stoi (str_bin,nullptr,2);
    int i_auto = stoi (str_auto,nullptr,0);

    cout << str_dec << ": " << i_dec << " and [" << str_dec.substr(size) << "]" << endl;
    cout << str_hex << ": " << i_hex << endl;
    cout << str_bin << ": " << i_bin << endl;
    cout << str_auto << ": " << i_auto << endl;


    // String to long int/hex/bin/octal
    string str_dec_l = "1987520";
    string str_hex_l = "2f04e009";
    string str_bin_l = "-11101001100100111010";
    string str_auto_l = "0x7fffff";
   
    long li_dec = stol (str_dec_l,&size);
    long li_hex = stol (str_hex_l,nullptr,16);
    long li_bin = stol (str_bin_l,nullptr,2);
    long li_auto = stol (str_auto_l,nullptr,0);

    cout << str_dec_l << ": " << li_dec << endl;
    cout << str_hex_l << ": " << li_hex << endl;
    cout << str_bin_l << ": " << li_bin << endl;
    cout << str_auto_l << ": " << li_auto << endl;

    // String to unsigned long
    string str_ul = "20182001901920ul";
    unsigned long ul = stoul (str_ul,nullptr,0);
    cout << "Unsigned Long: " << ul << endl;

    //String to unsigned long long
    string str = "8246821 0xffff 020 -1";

    string::size_type sz = 0;   // alias of size_t

    while (!str.empty()) 
    {
        unsigned long long ull = stoull (str,&sz,0);
        cout << str.substr(0,sz) << " Interpreted as: " << ull << endl;
        str = str.substr(sz);
    }

    // to_string function
    string pi_str = "PI is " + to_string(3.1415926);
    string perfect_str = to_string(1+2+4+7+14) + " is a perfect number";
    cout << "PI: "<<pi_str << endl;
    cout << "Perfect: "<< perfect_str << endl;
    
    //  to_wstring
    wstring pi = L"pi is " + to_wstring(3.1415926);
    wstring perfect = to_wstring(1+2+4+7+14) + L" is a perfect number";
    wcout << pi << L'\n';
    wcout << perfect << L'\n';

   return 0;
}