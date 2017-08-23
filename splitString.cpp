// Krzysztof Siminski (ksiminski@polsl.pl), 2017

// Function splits a string into substrings :-)


std::vector<std::string> splitString (std::string s, char separator)
{
   std::vector<std::string> slowa;
   
   int size = s.size();
   int poczatek = 0; 
   int koniec   = 0;
   
   bool jestZnak = false;
   
   for (int  i = 0 ; i < size; i++)
   {
      if (jestZnak)
      {
         if ((s[i] == separator)) // koniec
         {
            koniec = i - 1;
            jestZnak = false;
            
            std::string slowo = s.substr(poczatek, koniec - poczatek + 1);
            slowa.push_back(slowo);
         }
      }
      else // byly spacje
      {
         if ((s[i] != separator)) 
         {
            poczatek = i;
            jestZnak = true;
         }
      }
   }
   
   // doszlismy do konca, trzeba sprawdzic, czy nie bylo napisu
   if (jestZnak)
   {
      std::string slowo = s.substr(poczatek);
      slowa.push_back(slowo);
   }         
   
   return slowa;
}