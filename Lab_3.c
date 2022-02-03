#include <stdio.h>

int main()
{
    // Arrays initialization
    int array1[]={5,8,15,3,10,25,6,70,4};
    int array2[]={8,14,2,0,5,74,21,4,1};

    /* Calculating number of elements in each array (length) using sizeof() function.
       It simply divides size of the whole array by size of one element. */
    int length1 = (sizeof(array1) / sizeof(array1[0]));
    int length2 = (sizeof(array2) / sizeof(array2[0]));

    // "Times" variable shows how many elements have coincided.
    int times=0;

    // Checking the elements for coincidence using nested loops.
    for (int k=0; k<length2; k++)
    {
        for (int i=0; i<length1; i++)
        {
            if (array1[i] == array2[k])
            {
            /* If i-th element of first array has coincided with one of the elements from second array,
               we shift all the first array elements, following the i-th element, by one.
               Besides, incrementing "times" variable. */
                for (int k = i; k < length1; i++)
                {
                    array1[i] = array1[i + 1];
                }
                times++;
            }
        }
    }

    printf("\nThe arrays difference is:\n");
    for(int i=0; i<=length1-times; i++)
    /* Printing first array elements. Pay attention, the number of printing elements of first array is
       reduced by the value of the variable "times", comparing to the initial number of elements */
    {
        printf("%d ", array1[i]);
    }
}
