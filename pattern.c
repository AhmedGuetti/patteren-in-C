#include<stdio.h>
#include "pattern.h"



void pattern1(int i){

    for (int j = 0;j < i; j++)
    {
        printf("   ");
        for ( int k = 0; k < j; k++)
        {
            printf("*");
        }
        printf("\n");  
    }
}


void pattern2(int i){

    for (int j = 0;j < i; j++)
    {
        printf("   ");
        for ( int k = 0; k < i-j; k++)
        {
            printf("*");
        }
        printf("\n");  
    }
}


void pattern3(int i){

    for (int j = 0;j < i; j++)
    {
        printf("   ");
        for (int n = 0; n < i-j-1; n++)
            {
                printf(" ");
            }
            
        for ( int k = 0; k < j; k++)
        {
            printf("*");
        }
        
        printf("\n");  
    }
}

void pattern4(int i){
    for (int j = 0;j < i; j++)
    {
        printf("   ");
        for (int n = 0; n < j; n++)
            {
                printf(" ");
            }
            
        for ( int k = 0; k < i-j; k++)
        {
            printf("*");
        }
        
        printf("\n");  
    }
}



void pattern5(int i){

    for (int j = 1;j < i; j++)
    {
        printf("   ");
        for ( int k = 1; k < 2*i-1; k++)
        {
            if(k >= i-(j-1) && k <= i+(j-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        
        printf("\n");  
    }
}


void pattern6(int i){

    for (int j = 1;j < i; j++)
    {
        printf("   ");
        for ( int k = 1; k < 2*i-1; k++)
        {
            if(2*i-1-k >= i-(j-1)&& 2*i-1-k <=i+(j-1)){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        
        printf("\n");  
    }
}


void pattern7(int i){

    for (int j = 1;j < i; j++)
    {
        printf("   ");
        for ( int k = 1; k < 2*i-1; k++)
        {
            if(k >= i+(j-i+1)&& k <=i-(j-i+1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        
        printf("\n");  
    }
}




void pattern8(int i){
    
    for (int j = 1;j < i; j++)
    {
        printf("   ");
        for ( int k = 1; k < 2*i-1; k++)
        {
            if(2*i-1-k >= i+(j-i+2)&& 2*i-1-k <=i-(j-i+2)){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        
        printf("\n");  
    }
}

