/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: prash
 *
 * Created on July 8, 2018, 8:16 PM
 */

#include <stdio.h>
#define MAX 20


int reversearray(int arr[], int start, int end)
{
    int i=start;
    int j=end-1;
    int temp;
    while(i<j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return arr;
}
int main(){
    int i,j,temp,*arr, size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter the numbers in the array ");
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    reversearray(arr,0,size);
    printf("reversed array is: ");
    for(i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

// int main(){
    
// }
