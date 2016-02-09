

#include "debug_new.h"

int main ()
{
    int * pint = new int [10];
    int * pdouble = new double[10];
    
    delete [] pint;
    
    
    
    return 0;
}