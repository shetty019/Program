/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: prash
 *
 * Created on July 8, 2018, 3:34 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int temp,n,rem,sum=0;
    printf("enter the number to check if it is a palindrome: ");
    scanf(" %d", &n);
    temp = n;
    while(temp > 0)
    {
        rem  = temp%10;
        sum = sum*10 + rem;
        temp = temp/10;
    }
    if(sum == n)
    {
        printf("Its a palindrome");
    }
    else{
        printf("Its not a palindrome");
    }
    return 0;
}

