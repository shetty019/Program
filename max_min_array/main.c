/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: prash
 *
 * Created on July 8, 2018, 4:18 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100

/*
 * 
 */
int main(int argc, char** argv) {
    int arr[MAXSIZE];
    int i,size, max, min;
    int count =0 ,  sum =0, avg;
    
    printf("Enter the size of array and check for max and min in array: ");
    scanf("%d" , &size);
    printf("Enter the elements: ");
    for (i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i=0;i<size;i++){
        sum = sum + arr[i];
        count = count + 1;
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    avg = sum/count;
    printf("max is %d min is %d avg is %d", max,  min, avg);
    return (EXIT_SUCCESS);
}

