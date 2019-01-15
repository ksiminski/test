


#include <string>
#include <iostream>
#include <vector>
#include "splitString.cpp"


using namespace std;

int main ()
{
   std::string napis ("Litwo,     ojczyzno moja!    Ty jestes    jak zdrowie.");

   auto slowa = splitString (napis, ' ');
   for (auto s : slowa)
      std::cout << "|" << s << "|" << std::endl;

   return 0;
}

