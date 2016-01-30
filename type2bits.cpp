
// Krzysztof Siminski, 2016

#include <string>
#include <vector>

// Returns a vector of bits representing a value of the t variable.

template <class T>
std::vector<bool> type2bits (T t)
{
    std::vector<bool> bits; 
    const int BITS = 8;
    const unsigned int LENGTH = sizeof(T);
    unsigned char bytes [LENGTH];
    memcpy(bytes, (void *) & t, LENGTH);
    for (int i = LENGTH - 1 ; i >= 0; i--)
    {
        unsigned char mask = 0x80;  // 1000 0000
        for (int j = 0; j < BITS; j++)
        {
            if (bytes[i] & mask)
                bits.push_back(true);
            else 
                bits.push_back(false);
            mask >>= 1;
        }
    }
    return bits;    
}

// Returns a string of 0's and 1's of bools in a vector.
std::string bits2string (const std::vector<bool> & bits)
{
    std::string s;
    const int BITS = 8;

    int counter = 0;
    for (bool b : bits)
    {
        if (b)
            s += "1";
        else
            s += "0";
        counter++;
        if (counter == BITS)
        {
            s += " ";
            counter = 0;
        }
    }
    return s;
}
