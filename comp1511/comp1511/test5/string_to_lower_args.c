// z5320158 

#include <stdio.h>
#include <ctype.h>

#define MAX 100


int main (int argc, char *argv[]) {
    

    for (int i = 1; argv[i] != NULL; i++) {
        
        int j = 0;
        char *string = argv[i][j]
        
        while (string[j] != '\0') {
            int ch = string[j];
            if (ch > 'A' && ch < 'Z') {
                ch += 32;
            
            }
            putchar(ch);
            j++;
        }
        putchar(' ');
        i++;
    }
    
    printf("\n");
}


