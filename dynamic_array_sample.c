#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// define the maximum length of the string you will store in the array

#define MAX_STRING_LENGTH 20

int main() {
  char** strings = NULL;
  int size = 5;

  strings = (char**)malloc(size * sizeof(char*));
  if (strings == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
  }

  
