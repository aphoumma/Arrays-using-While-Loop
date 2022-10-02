// Test Question 2 Systems Programming
// Convert for loop to while loop
// Use while loop to print array forwards and backwards




//#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{

int *a;
int size = 6;
int i;

//dynamically allocated space for array
a = (int*)calloc(size, (sizeof(int)));

a[0] = 8;
a[1] = 45;
a[2] = 3;
a[3] = 9;
a[4] = 11;
a[5] = 98;


printf("Printing array forwards: \n");

// to print array forwards using while loop
// first have to initialize i BEFORE doing while loop
i = 0; 
while (i < size)
{
    printf("%d \n", a[i]);
    i++; 
}



printf("Printing array backwards: \n");

// to print array backwards
i = size-1;
while (i >= 0)
{
    printf("%d \n", a[i]);
    i--;
}


printf("We will free memory and after that and try to print our array - which cannot be done. \n");

// to free memory and prove it is free
free(a);

i = 0;
while (i < size)
{
    printf("%d \n", a[i]);
    i++;
}


}