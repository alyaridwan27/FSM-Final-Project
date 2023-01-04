#include <stdio.h>
#include "mylib/mylib.h"

int main()
{
  int state = 0; // Initial state is 00
  int input;

  printf("Welcome to the gumball vending machine!\n");
  printf("To dispense a gumball, deposit 0.4 cents.\n");

  while (1) // Run indefinitely
  {
    printf("Current state: %d%d\n", state / 2, state % 2);
    printf("Enter 1 to insert a coin or 0 to cancel: ");
    scanf("%d", &input);

    if (is_valid_input(input))
    {
      state = next_state(state, input);
      if (should_dispense(state))
      {
        printf("Gumball dispensed!\n");
      }
    }
    else
    {
      printf("Invalid input.\n");
    }
  }

  return 0;
}