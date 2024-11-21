#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;
    int* aPtr;

    a = 7;
    aPtr = &a;

    printf("The address of a is %p\n", &a);
    printf("The value of aPtr is %p\n", aPtr);

    printf("\n\nThe value of a is %d\n", a);
    printf("The value of *aPtr is %d\n", *aPtr);

    printf("\n\nShowing that * and & are complements of each other\n");
    printf("*&aPtr = %p\n", *&aPtr);
    printf("&*aPtr = %p\n", &*aPtr);

    system("pause");

    return 0;
}