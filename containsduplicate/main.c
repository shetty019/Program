/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: prash
 *
 * Created on July 5, 2018, 12:05 AM
 */

/*Given an array of integers, find if the array contains any duplicates.

Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

Example 1:

Input: [1,2,3,1]
Output: true
Example 2:

Input: [1,2,3,4]
Output: false
Example 3:

Input: [1,1,1,3,3,4,3,2,4,2]
Output: true*/

#include <stdio.h>
#include <stdlib.h>

int comparefunc(const void* a, const void* b){
    int *x,*y;
    x=(int* )a;
    y=(int* )b;
    return (*x - *y);
}

_Bool containsDuplicate(int *nums, int numsSize){
    int i;
    qsort(nums, numsSize, sizeof(int), comparefunc);
    
    for(i=0; i<numsSize ; i++){
        if(nums[i] == nums[i+1])
        {
            return 1;
        }
    }
    return 0;
}
int main(int argc, char** argv) {
    int res;
    int a[] = {100,88,44,111,77};
    res =  containsDuplicate(a,5);
    printf("%d ", res);
           
    return (EXIT_SUCCESS);
}

