// COMP1511 Week 4 Lab: Simple Calculator
//
// This program was written by Jawad Tanana (z5320158)
// on 28-06-2020
//
// This program finds....
//

#include <stdio.h>
#include <math.h>


int main(void) {
    int first_number;
       
    printf("Enter instruction: ");    
    int result = scanf("%d", &first_number);  
    while (result == 1) {  
        if (first_number == 1) {
            int second_number;
            scanf("%d", &second_number);
            
            printf("%d\n", second_number * second_number);
        }
        else if (first_number == 2) { 
            int second_number, third_number;
            scanf("%d %d", &second_number, &third_number);
            
            int power = pow(second_number, third_number);
            printf("%d\n", power);
        }
        printf("Enter instruction: ");  
        result = scanf("%d", &first_number);
    }
     

    
}
    

