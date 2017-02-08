
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main ()
{
    const string szPlik ("plik");
     
    ofstream plik (szPlik, ios::binary);
    
    if (plik)
    {
      
      for (int i = -5; i < 10; i++)
      {
	plik.write((char *) & i, sizeof (int));
      }
      
      plik.close();
    }
    
    // teraz czytamy:
    
    ifstream czytacz (szPlik, ios::binary);
    if (czytacz)
    {
      int liczba;
      while(!czytacz.eof())
      {
          if(czytacz.read((char *) & liczba, sizeof(int)))
	      cout << liczba << endl;
      }
      
      
      czytacz.close();
    }

}
