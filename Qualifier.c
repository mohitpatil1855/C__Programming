#include <stdio.h>
int main()
{

    int iNo1 = 10;
    const int iNo2 = 20;

    // Below lines generates Error

    iNo1++;    // iNo1 = iNo1 + 1;
    iNo2++;    // iNo2 = iNo2 + 1;       //due to const
    iNo2 = 30; // due to const

    return 0;
}