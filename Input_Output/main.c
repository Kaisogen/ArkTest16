//This code may be outdated in some way. If you know C, and would like to improve the readability or compatibility of this code, please make a pull request on the github repo: https://github.com/Kaisogen/ArkTest16/




//This allows us to pull input and output it through Puts and Gets.

#include <stdio.h>

//char will hold our input for us. Input is the name of the value.
//We will be using this later. Remember that it has a maximum length of 100 characters.
char input[100];



//Main loop. This is where most of the code will go. Anything behind it is either declaration of another function or initialization, most of the time.

int main() {
	
	//printf outputs a statement for us. The parenthesis hold the statement.
	printf("Hello, this statement was printed to the terminal using printf.");
	
	//Same as last time. Here we use '\n' to signify a new line. Since we type it twice, it will make two new line characters.

	printf("\n\nPlease type in a statement:");

	//Gets will prompt the user for an answer. It does not support an answer in itself. So we place a question in the previous printf. Then, we use gets to prompt for an answer. We apply the answer to our char "input". 
	
	gets(input);

	//We will use puts to place our char in the same line, and not in the same line as our printf.

	printf("\nYou previously typed: ");
	
	puts(input);

	//Who doesn't like a nice program?
	printf("\nThank you for your time.\n");

	//Our program ended successfully.
	return 0;
}