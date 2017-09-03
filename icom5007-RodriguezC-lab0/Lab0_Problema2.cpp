//
//  main.c
//  Lab0_Problema2
//
//  Created by Carlos A. Rodriguez Santiago on 8/28/17.
//  Copyright © 2017 Carlos A. Rodriguez Santiago. All rights reserved.
//

#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>


#define SIZE 10002                  /* Maximum number of characters */

int main(){
    
    int number;                     /* Store the number of words to decipher */
    static char cipherText[SIZE];   /* Array for the input Cipher Text */
    static char decipherText[SIZE]; /* Array for the output Decipher Text */
    
    //Ask the user to enter the cipher text
    printf("Please enter the number of words to be deciphered: ");
    scanf("%d", &number);
    getchar();                      /* New line for the input buffer */
    
    while(number>0){
        printf("Please enter the cipher text: ");
        scanf("%[^\n]",cipherText);
        getchar();
                                    /* New line for the input buffer */
        unsigned long length = strlen(cipherText);    /* Get the length of the string cipherText*/
        unsigned long root = sqrt(length);            /* Get the square root of the length of the string */
        
        
        memset(decipherText, '\0', sizeof decipherText); /*Reset characters in decipherText */
        
        if( root * root == length ){    /* Confirm is a perfect square if not it is INVALID*/
            int counter = 0;            /* Index for decipherText Array */
            for( int j = 0; j < root; ++j ){
                for( long i = j; i < length; i = i + root ){
                    decipherText[counter++] = cipherText[i]; /* Set the character deciphered in the decipherText Array */
                }
            }
            printf("Decipher Text: %s \n ", decipherText);
            printf("\n");
            
        }
        else{
            
            printf("\n");
            puts("INVALID");
        }
        number--;
    }
    
    
    return 0;
}


