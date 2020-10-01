/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: prash
 *
 * Created on July 8, 2018, 1:34 PM
 */

#include<stdio.h>
int main(){
    int a=0,b=1,comb,i,n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("\n%d %d",a,b);
    for(i=2;i<n;i++){
        comb=a+b;
        printf(" %d",c);
        a=b;
        b=c;
        
    }
    return 0;
}

/*
#include<stdio.h>    
int main()    
{    
 int n1=0,n2=1,n3,i,number;    
 printf("Enter the number of elements:");    
 scanf("%d",&number);    
 printf("\n%d %d",n1,n2);//printing 0 and 1    
 for(i=2;i<number;i++)//loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 }*/ 
