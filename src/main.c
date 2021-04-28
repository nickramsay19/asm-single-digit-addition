#include <stdio.h>

// declare function defined in asm
int procedure(char c1, char c2);

int main() {

    // declare input charactersand result
    char c1, c2, r;

    // get the input character from stdin
    printf("Please enter two single digit numbers separated with a return.\n");
    scanf("%c\n%c", &c1, &c2);

    // run the procedure and place value in r
    r = procedure(c1, c2);

    // print the result
    printf("The result is %d\n", r);
    
    // return success code 0
    return 0;
}
