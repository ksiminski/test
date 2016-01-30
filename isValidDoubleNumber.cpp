

// Krzysztof Siminski, 2016

// Returns true if a double number d is a number.
// Returns false if it is not a number (NaN), infinity. 
bool isValidDoubleNumber (double d)
{
    const int BITS = 8;
    const unsigned int LENGTH = 8; 
    if (LENGTH != sizeof(double))
        return false;

    unsigned char bytes [LENGTH];
    memcpy(bytes, (void *) & d, LENGTH);

    unsigned char mask1 = 0x7f,
                  mask2 = 0xf0;

    // check the bits in the number
    if ((mask1 & bytes[LENGTH - 1]) == mask1 && (mask2 & bytes[LENGTH - 2]) == mask2)
        return false;
    
    return true;
}