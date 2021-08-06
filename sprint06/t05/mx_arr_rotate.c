#include <stdbool.h>

void mx_arr_rotate (int*arr, int size, int shift)
{
    int i, j, tmp, sign = 1;
    bool left = false, right = false;
    
    if (shift < 0)
    {
        left = true;
        sign = -1;
    }

    else if (shift > 0)
        right = true;

    else
        return;

    shift *= sign;

    //right rotation
    for (i = 1; i <= shift && right; i++)
    {
        tmp = arr[size - 1];

        for (j = size - 1; j >= 1; j--)
            arr[j] = arr[j-1];
        
        arr[j] = tmp;
    }

    //left rotation
    for (i = 1; i <= shift && left; i++)
    {
        tmp = arr[0];

        for (j = 0; j < size - 1; j++)
            arr[j] = arr[j+1];
        
        arr[j] = tmp;
    }
}
