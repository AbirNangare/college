#include <stdio.h>

int main() {
  int num, position, new_num;

  printf("Enter a number: ");
  scanf("%d", &num);

  printf("Enter bit position to toggle (0-indexed): ");
  scanf("%d", &position);

  new_num = num ^ (1 << position);

  printf("\nOriginal number: %d\n", num);
  printf("Position to toggle: %d\n", position);
  printf("Number after toggling %d bit: %d\n", position, new_num);

  return 0;
}
