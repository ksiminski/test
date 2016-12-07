

// Memory leak detection for Visual Studio 
 
#include <string>
 

// memory leak detection
#define _CRTDBG_MAP_ALLOC  
#include <stdlib.h>
#include <crtdbg.h>
//----------------


struct osoba
{
    std::string imie, nazwisko;
    osoba * pnext;
};

int main()
{
    {
        int a;
        std::string ss;

        std::string * pss = new std::string();

        delete pss;

        osoba * pos = new osoba;
        osoba * pos1 = new osoba;
        pos1->pnext = pos;

        delete pos;
        delete pos1;

    }
    _CrtDumpMemoryLeaks();   // memory leak detection
    return 0;
}

