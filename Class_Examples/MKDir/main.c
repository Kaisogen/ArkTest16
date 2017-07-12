// This will NOT compile unless you replace [PLACEHOLDER] with the current users folder.

#include <stdio.h>

//Include these libraries to use mkdir()
#include <sys/types.h>
#include <sys/stat.h>

int main() {

    printf("This program uses mkdir() to create a new directory. A directory will be created in the following location:\n");
    
    printf("\n/home/[PLACEHOLDER]/desktop/Directory5");
    
    mkdir("/home/[PLACEHOLDER]/desktop/Directory5", 0777);
    
    printf("\nFolder Created. To compile again, type\n\n");
    
    printf("gcc main.c -o mkdir.out");

    return(0);
}
