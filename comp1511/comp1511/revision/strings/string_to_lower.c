// convert a string to lowercase
// created by
//  ... (z0000000)
// created on 2019-??-??

#include <stdio.h>

void string_to_lower(char *buffer);

int main(int argc, char *argv[]) {

    // NOTE: THIS WON'T WORK:
    // char *str = "Hello!"
    // string_to_lower(str)
    //
    // str only points to a string literal, which it is not legal to change.
    // If you attempt to modify it on Linux you will get a runtime error.
    // Instead, you need to create an array to store the string in, e.g.:
    //
    // char str[] = "Hello!"
    // string_to_lower(str)

    char str[] = "Seventeen...  SEVENTEEN, I SAY!";
    string_to_lower(str);
    printf("%s\n", str);

    return 0;
}

// Convert the characters in `buffer` to lower case
void string_to_lower(char *buffer) {
    // YOUR CODE GOES HERE!
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] >= 'A' && buffer[i] <= 'Z') {
            buffer[i] = buffer[i] - 'A' + 'a';
             
        } 
    }
}
