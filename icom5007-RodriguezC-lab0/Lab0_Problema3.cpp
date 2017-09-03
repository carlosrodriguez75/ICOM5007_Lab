//
//  main.c
//  Lab0_Problema3
//
//  Created by Carlos A. Rodriguez Santiago on 8/28/17.
//  Copyright © 2017 Carlos A. Rodriguez Santiago. All rights reserved.
//

#include<stdio.h>
#include<string.h>

#define SIZE  100
int main(){
    
    int numberOfCases=0;            /* Number of cases entered by the user */
    char cases[SIZE] = {};          /* Array for the input case */
    char reverseCase[SIZE] = {};    /* Array for the input reverse case */
    char answer[SIZE] = {};         /* Array for the final answer after reverse the input */
    int casesCounter = 1;           /* Display the current Case number */
    
    //Ask the user for the number of cases
    printf("Enter the number of cases:");
    scanf("%d",&numberOfCases);
    getchar();                      /* New line for the input buffer */
    
    while(numberOfCases--){
        int i = 0;
        int j=0;
        int counter=0;
        //Ask the user to enter the input case
        printf("Enter your text: ");
        scanf("%[^\n]", cases);
        
        getchar();                   /* Returns the character read as an unsigned character */
        memset(reverseCase, '\0', sizeof reverseCase); /*Reset characters in reverseCase */
        memset(answer, '\0', sizeof answer);           /*Resets characters in answer */
        
        i= strlen(cases);           /* Lenght of the input case */
        
        //Reverse cases string and store the new one in reverseCase
        while(i>0){
            reverseCase[j]=cases[--i]; /* First position in reverseCase will be equal to the last position in cases */
            ++j;
        }
        
        
        //Reverse all the words
        for(i=0;reverseCase[i]!='\0';i++){ /*Increase i until the end of reverseCase array */
            
            if(reverseCase[i+1]=='\0' || reverseCase[i+1]==' ' ) {/* If the next position is NULL or a space  then invert the word until find a space or j =0  */
                
                for(j=i;j>=0 && reverseCase[j]!=' ';j--){
                    answer[counter] = reverseCase[j];
                    counter++;
                }
                answer[counter] = ' ';      /* Add a space after the reverse of the word */
                counter++;                  /* Increment answer index */
                i=i+1;                      /* Increment reverseCase index after adding a space */
                
            }
        }
        
        printf("Case # %d: %s\n ", casesCounter, answer); /* Print Case Counter and Reverse Word*/
        casesCounter++;                                   /* Increment cases counter */
        
    }
    return 0;
    
}



