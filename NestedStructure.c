#include <stdio.h>

struct Demo
{
    int i;
    float f;
};

struct Hello
{
    int no;
    float Marks;
    struct Demo dobj; // nested
};

int main()
{

    printf("size of Structure Hello is : %lu\n", sizeof(struct Hello)); // 16

    return 0;
}
