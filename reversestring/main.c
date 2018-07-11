/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: prash
 *
 * Created on July 8, 2018, 5:16 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
/*
 * 
 */

int strln(char *s){
    int i=0;
    while(s[i]!='\0')
    {
        ++i;
    }
    return i;
}

int main(int argc, char** argv) {
    int i, n;
    char *str = "hello world";
    n = strln(str);
    for(i = n-1; i>=0; i--)
    {
        printf("%c", str[i]);
    }
    return (EXIT_SUCCESS);
}

/*
void main(){
    int len, i;
    char *s;
    printf("Enter the string to be reversed: ");
    gets(s);
    len = strlen(s);
    printf("reversed string is: " );
    for(i=len; i>=0; i--){
        printf("%c", *s(i+1));
    }
}
*/