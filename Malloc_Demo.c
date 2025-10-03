#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length = 0;
    int *Arr = NULL;

    printf("Enter the number of Elements :\n");
    scanf("%d\n", &length);

    // Step 1 : Allocate the Memory
    Arr = (int *)malloc(length * sizeof(int));
    if (Arr == NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        printf("Memory gets succesfully allocated\n");
    }

    // step 2: Use the Memory

    // step 3: Free the Memory
    free(Arr);

    return 0;
}