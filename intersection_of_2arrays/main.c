/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: prash
 *
 * Created on July 6, 2018, 5:54 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void intersection(int arr1[], int arr2[], int n, int m){
    int i,j;
    
    while(i<n && j<m)
    {
        if(arr1[i] > arr2[j])
        {
            i++;
        }
        else if(arr2[j]>arr1[i])
        {
            j++;
        }
        else
        {
            printf("%d ", arr1[i] );
            i++;
            j++;
        }
    }
    //return 0;;
}
int main(int argc, char** argv) {
    int a[] = {1,2,5,6,2,4,5};
    int b[] = {2,5,2,5,6};
    int res;
    
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(a[0]);
    
    intersection(a,b,n,m);

    return (EXIT_SUCCESS);
}

