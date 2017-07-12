#include <stdio.h>

char name[24];
char lname[24];

int main() {
	
  printf("Hello. Please type your surname, and press enter."\n);
  gets(namel);
  printf("\nThank you. Please type your first name, and press enter.\n");
  gets(name);
  printf("\nHello %s %s, it's nice to meet you. Goodbye.", name, lname);
  
  return(0);
}
