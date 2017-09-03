//
//  main.c
//  Lab0_Problema1
//
//  Created by Carlos A. Rodriguez Santiago on 8/26/17.
//  Copyright © 2017 Carlos A. Rodriguez Santiago. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    long long first, second;	 /* Input of the first and second quantity of soldiers. Long long */
    long long value = 0 ;     /* The value of the difference between first and second*/
    
    printf("Please enter the first and second quantity of soldiers separated by a space and then press enter:");
    printf("\n");

    while(scanf("%lld %lld", &first, &second) == 2){/* While loop as long as both first and second are of the same type */
        
        if(first > second){
  
            value = first - second;
            
        }else if(first < second){
       
            value = second - first;
            
        }
        
        printf("\n");
        printf("%lld is the difference of soldiers", value);	/*Print Value */
        printf("\n\n");
        
    }
    
    
}
