/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: prash
 *
 * Created on July 8, 2018, 3:49 PM
 */

// Including header files
#include <stdio.h>  
#include <stdlib.h>

// Starting main function
int main(int argc, char** argv) {
    int i, n, fact=1;   // initializing variables

    printf("Enter the number to get factorial: ");
    scanf("%d", &n);    // Taking inputs

    for(i=1;i<=n;i++){
        fact = fact*i;  // logic applied
    }
    printf("%d ", fact);    // printing output

    return 0;
}
