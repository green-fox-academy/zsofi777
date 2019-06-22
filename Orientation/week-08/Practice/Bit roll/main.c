#include <stdio.h>

main()
{

    /*
    unsigned int a = 44252;    // hexadecimal: ACDC, binary: 1010110011011100
    unsigned int b = 6346;	// hexadecimal: 18CA, binary: 1100011001010
    int c, d = 0;

    c = a << 2 ^ b;     // 177008 = 101011001101110000 = 2B370
    printf("%d\n", c);

    //d = c ^ b;       // 175034 = 101010101110111010 = 2ABBA
    //printf("%d\n", d);
    */

    /*
    unsigned int a = 6534;    // binary: 1100110000110
    unsigned int b = 69;	// binary: 00100111
    int c = 0;

    c = a >> 2 & b;     // 65 = 1000001
    printf("%d\n", c);
    */

    unsigned int a = 147;    // binary: 10010011
    unsigned int b = 65;	// binary: 1000001
    int c = 0;

    c = a ^ b;
    printf("%d\n", c);      // 210 = 11010010


}


