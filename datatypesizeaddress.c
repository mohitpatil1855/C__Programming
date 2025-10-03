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

    printf("Address of cValue is: %lu\n", &cValue);
    printf("Address of iValue is: %lu\n", &iValue);
    printf("Address of fValue is: %lu\n", &dValue);
    printf("Address of dValue is: %lu\n", &fValue);

    return 0;
}