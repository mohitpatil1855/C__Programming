#include <stdio.h>

int main()
{
    double Arr[] = {10.0, 20.0, 30.0, 40.0};

    printf("size of Arr : %lu\n", sizeof(Arr)); // 32

    Arr++; // ERROR

    return 0;
}