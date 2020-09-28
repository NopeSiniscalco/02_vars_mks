//Francesco Siniscalco

#include <stdio.h>
int main()
{
    int x = 1;
    printf("1: %d\n", x);

    char y = 'a';
    printf("a: %c\n", y);
    char z = 1;
    printf("1: %d\n", z);

    //Unsigned types
    unsigned int many = 1000;
    printf("1000: %d\n", many);
    unsigned int manyless = -1000;
    printf("-1000: %u\n", manyless);

    //Out of bounds
    char ff = 127;
    printf("127: %d\n", ff);
    char ss = 128;
    printf("128: %d\n", ss);
    unsigned char aa = 256;
    printf("256: %d\n", aa);
    unsigned char aaa = 255;
    printf("255: %d\n", aaa);

    return 0;
}
