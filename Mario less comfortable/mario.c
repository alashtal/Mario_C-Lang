//#include <cs50.h>
#include <stdio.h>

int main(void) {
  /*
   # => row
  ##
 ###

  */
  int climax;
  do {
    climax = get_int("Enter the Height: ");
    // This takes an command line input from the user to display the amount of #
    // required

  } while (climax <= 1 && climax >= 8); // which should be between 1 and 8

  for (int rows = 0; rows <= climax; rows++) {
    // for each row which is less than or equals to cleinput (1-8) scan or count
    // every row
    for (int spaces = 0; spaces <= climax - rows; spaces++) {
      // For each row - the height add space
      // ...1
      // ..2
      // .3
      printf(" ");
    }
    for (int j = 0; j <= rows; j++) {
      // for each row counted within the first loop print # so if its second row
      // print ##, 3rd ###
      printf("#");
    }
    printf("\n"); // go down to a new line
  }
  return 0;
}