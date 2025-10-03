#include <stdio.h>
int main()
{
    char cValue = 's';
    int iValue = 78;
    float fValue = 14.2f;
    double dValue = 98.54486;

    printf("size of character is : %lu\n", sizeof(cValue));
    printf("size of integer is : %lu\n", sizeof(iValue));
    printf("size of float is : %lu\n", sizeof(fValue));
    printf("size of double is : %lu\n", sizeof(dValue));

    return 0;
}