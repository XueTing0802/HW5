#include <stdio.h>
#include <stdlib.h>
int main()
{

    int ar[100], n, i;
    int* ptr;
    printf("Enter size of the list:");
    scanf_s("%d", &n);
    printf("Printing the list:\n");
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &ar[i]);
    }
    ptr = &ar;
    int max = maximum(ptr, n);
    printf("maximun=%d", max);
    return 0;
}
int maximum(int ar[], int n)
{

    int max;
    if (n + 1 == 1)
    {
        return ar[n];
    }
    max = maximum(ar, n - 1);
    return ar[n] > max ? ar[n] : max;
}