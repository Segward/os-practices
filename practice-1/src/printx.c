#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_LENGTH 4096

int main(int argc, const char** argv) {
    if (argc < 2) {
      printf("Usage: %s <integer>\n", argv[0]);
      return 1;
    }

    for (int i = 0; argv[1][i] != '\0'; i++) {
      char c = argv[1][i];
      if (!isdigit(c)) {
        printf("Error: Argument must be a positive integer.\n");
        return 1;
      }
    }

    int number = atoi(argv[1]);
    if (number <= 0) {
      printf("Error: Argument must be a positive integer.\n");
      return 1;
    }

    char input[MAX_LENGTH];
    printf("Enter a string: ");     
    fgets(input, MAX_LENGTH, stdin);

    for (int i = 0; i < number; i++) {
      printf("%s", input);
    }

    return 0;
}
