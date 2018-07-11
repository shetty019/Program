/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: prash
 *
 * Created on July 4, 2018, 12:05 PM
 */

#include <stdio.h>
#include <stdlib.h>

void rotate(int *arr, int size, int shiftnum){
    
    while(shiftnum>0)
    {
        int temp = arr[size-1], i;
        for( i=size-1; i>0; i--)
        {
            arr[i] = arr[i-1];
            //printf("%d ", arr[i]);
        }
        arr[0] = temp;
        shiftnum--;
    }
    //return arr;
}
int main(int argc, char** argv) {
    int i;
    int s[] = {1,2,3,4,5,6,7};
    
    rotate(s, 7, 3);
    for(i=0; i<7; i++)
    printf("\n%d ", s[i]);

    return (EXIT_SUCCESS);
}

