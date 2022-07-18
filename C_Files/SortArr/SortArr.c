#include <stdio.h>


void sort(int array[], int size) 
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(array[j] < array[j+1]) //if (number on the left > number on the right) 
                                        // if you want DECENDING ORDER switch ">" to "<"
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp; 
            }
        }
    }


}

void printArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}



int main()
{
    int array[] = {9, 5, 3, 7, 1, 4, 2};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    printArray(array, size);

    return 0;
}

/*
    1. identify arr 
        a. in name[] = values;
    2. figure out the size using sizeof  
        a. sizeof(name)/sizeof(name[index])
    3. write sort function
        a. void sort(var1, var2)
            REMEMBER: void function because we are not returning anything
*/