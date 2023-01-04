#include "mylib.h"

int is_valid_input(int input)
{
  return (input == 0 || input == 1);
}

int next_state(int state, int input)
{
  if (input == 1)
  {
    return (state + 1) % 4;
  }
  else
  {
    return state;
  }
}

int should_dispense(int state)
{
  return (state == 0);
}