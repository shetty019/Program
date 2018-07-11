/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: prash
 *
 * Created on July 7, 2018, 6:21 PM
 */

#include <stdio.h>
#include <stdlib.h>

int movezero(int* nums, int numsize){
    int i,j,temp;
    for(i=0; i<numsize-1; i++){
        if(nums[i] == 0)
        {
            nums[temp] = nums[i];
            temp++;
        }
        }
    for(i=temp; i<numsize-1; i++){
        nums[i] = 0;
    }
    return 0;
}

int main(int argc, char** argv) {
    int a[] = {0,1,0,3,12};
    
    int res = movezero(a,5);
    printf("%d ", res);
    return (EXIT_SUCCESS);
}

