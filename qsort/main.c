/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: prash
 *
 * Created on July 4, 2018, 10:50 PM
 */

#include <stdio.h>
#include <stdlib.h>

int comparefunc(const void* a, const void* b)
{
    int *xx, *yy,ret;
    xx = (int* )a;
    yy = (int* )b;
    printf("\n%d\n", *xx);
    printf("\n%d\n", *yy);
    ret = (*xx - *yy); //ascending, for descending (*yy - *xx)
    return(ret);
}
int main(int argc, char** argv) {
    int a[] = {100, 88, 44, 111, 77};
    int i, n;
    n = sizeof(a)/sizeof(int);
    printf("Before sort: ");
    for(i=0; i< n ; i++)
    {
        printf("%d ", a[i]);
    }
    
    qsort(a, n, sizeof(int), comparefunc); // qsort is a function used for sorting
    
    printf("\nAfter Sort: ");
    for (i=0; i<n ; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

