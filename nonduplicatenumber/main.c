/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: prash
 *
 * Created on July 5, 2018, 4:09 PM
 */

#include <stdio.h>
#include <stdlib.h>
/*
int compare(const void* a, const void* b)
{
    int *xx, *yy, re;
    xx = (int* )a;
    yy = (int* )b;
    re = (*xx - *yy);
 //   printf("%d ",re);
    return re;
}


int singleNumber(int* nums, int numsSize) {
    int i, nondup;
    qsort(nums, numsSize, sizeof(int), compare);
    
    for(i=0 ; i<(numsSize-1); i++)
    {
        printf("%d\n", nums[i]);
        if (nums[i] != (nums[i+1]||nums[i+2]))
        {
            nondup = nums[i];
           // printf("%d",nondup);
        }
        else
            continue;
    }
    return nondup;
}*/

int singleNumber(int* nums, int numsSize) {
for(int i=0;i<numsSize-1;i++)
{
nums[i+1] = nums[i] ^ nums[i+1];
printf("%d", nums[i+1]);
}

printf("\n%d\n", nums[numsSize-1]);
printf("%d\n", (numsSize-1));
return nums[numsSize-1];
}
int main(int argc, char** argv) {
    int num;
    int  arr[] = {4,1,2,4,2};
    
    num = singleNumber(arr, 5);
    printf("%d",num);

    return (EXIT_SUCCESS);
}

