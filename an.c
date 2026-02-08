#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 2, 1};
    int flage = 0;
    for (int i = 0, j = 4; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            flage = 1;
        }
    }
    if (flage == 1)
    {
         printf("Array is Not palindrom");
        
    }
    else printf("Array is palindrom");
       
    return 0;
}